#include "converter.hpp"

Converter::Type Converter::_checkType(std::string str)
{
	Type ret = E_INVALID;
	size_t i =0;

	if (str.size() == 1 && isdigit(str.data()[0]) == false)
		ret = E_CHAR;
	if (str.data()[i] == '-')
		i++;
	for (; i < str.size() && isdigit(str.data()[i]);i++){}
	if (ret == E_INVALID && i == str.size())
		ret = E_INT;
	if (str.data()[i] == '.')
	{
		i++;
		for (; i < str.size() && isdigit(str.data()[i]);i++){}
		if (ret == E_INVALID && i == str.size())
			ret = E_DOUBLE;
		else if (ret == E_INVALID && i + 1 >= str.size() && str.data()[i] == 'f')
			ret = E_FLOAT;
	}
	if (str == "nan" || str == "-inf" || str == "+inf")
		ret = E_DOUBLE;
	if (str == "nanf" || str == "-inff" || str == "+inff")
		ret = E_FLOAT;
	return (ret);
}

Converter::Converter()
{
	_charValidity = false;
	_char = '\0';

 	_intValidity = false;
	_int = 0;

	_floatValidity = false;
	_floatIntegrity = E_VALID;
	_float = 0.0f;

	_doubleValidity = false;
	_doubleIntegrity = E_VALID;
	_double = 0.0;
	parse("");

}
Converter::Converter(std::string str)
{
	_charValidity = false;
	_char = '\0';

 	_intValidity = false;
	_int = 0;

	_floatValidity = false;
	_floatIntegrity = E_VALID;
	_float = 0.0f;

	_doubleValidity = false;
	_doubleIntegrity = E_VALID;
	_double = 0.0;
	parse(str);

}
Converter::Converter(const Converter& p_other)
{
	*this = p_other;
}

void Converter::_parseChar(std::string str)
{
	_charValidity = true;
	_intValidity = true;
	_floatValidity = true;
	_doubleValidity = true;
	_char = str.data()[0];
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}

void Converter::_parseInt(std::string str)
{
	_intValidity = true;
	_floatValidity = true;
	_doubleValidity = true;
	_int = atoi(str.data());
	if (_int < 128 && _int >= 0)
		_charValidity = true;
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
}

void Converter::_parseDouble(std::string str)
{
	if (str == "nan")
	 	_doubleIntegrity = E_NAN;
	else if (str == "-inf")
	 	_doubleIntegrity = E_NEG_INF;
	else if (str == "+inf")
	 	_doubleIntegrity = E_INF;
	else
		_doubleIntegrity = E_VALID;

	_floatIntegrity = _doubleIntegrity;
	_intValidity = (_doubleIntegrity == E_VALID ? true: false);
	_floatValidity = true;
	_doubleValidity = true;
	_float = atof(str.data());
	_int = static_cast<int>(_float);
	if (_int < 128 && _int >= 0)
		_charValidity = true;
	_char = static_cast<char>(_float);
	_double = static_cast<double>(_float);
}


void Converter::_parseFloat(std::string str)
{
	if (str == "nanf")
	 	_floatIntegrity = E_NAN;
	else if (str == "-inff")
	 	_floatIntegrity = E_NEG_INF;
	else if (str == "+inff")
	 	_floatIntegrity = E_INF;
	else
		_floatIntegrity = E_VALID;

	_doubleIntegrity = _floatIntegrity;
	_intValidity = (_floatIntegrity == E_VALID ? true: false);
	_floatValidity = true;
	_doubleValidity = true;
	_float = atof(str.data());
	_int = static_cast<int>(_float);
	if (_int < 128 && _int >= 0)
		_charValidity = true;
	_char = static_cast<char>(_float);
	_double = static_cast<double>(_float);
}

void Converter::parse(std::string str)
{
	if (str == "")
	{
		std::cout << "Unable to parse empty string" << std::endl;
	}
	else
	{
		Type tmp_type = _checkType(str);
		switch (tmp_type)
		{
			case E_CHAR :
				_parseChar(str);
				break;
			case E_INT :
				_parseInt(str);
				break;
			case E_FLOAT :
				_parseFloat(str);
				break;
			case E_DOUBLE :
				_parseDouble(str);
				break;
			case E_INVALID :
			default : ;
		}
	}
}

const Converter& Converter::operator =(const Converter& p_other)
{
	_charValidity = p_other._charValidity;
	_char = p_other._char;

	_intValidity = p_other._intValidity;
	_int = p_other._int;

	_floatValidity = p_other._floatValidity;
	_float = p_other._float;

	_doubleValidity = p_other._doubleValidity;
	_double = p_other._double;
	return (*this);
}

Converter::~Converter()
{

}

void Converter::printChar()
{
	// std::cout << __LINE__ << "::" <<  std::boolalpha << _charValidity  << '\n';

	if (_charValidity == false)
	{

		std::cout << "Impossible" << std::endl;
	}
	else
	{
		if (_char < 32 || _char > 126)
			std::cout << "Char [" << static_cast<int>(_char) << "] non displayable" << std::endl;
		else
			std::cout << "Char [" << _char << "]" << std::endl;
	}
}

void Converter::printInt()
{
	if (_intValidity == false)
	{
		std::cout << "Impossible" << std::endl;
	}
	else
	{
		std::cout << "Int [" << _int << "]" << std::endl;
	}
}

void Converter::printFloat()
{
	if (_floatValidity == false)
	{
		std::cout << "Float invalide" << std::endl;
	}
	else
	{
		switch (_floatIntegrity)
		{
		case E_NEG_INF:
			std::cout << "-inff" << std::endl;
			break;
		case E_VALID:
			std::cout << _float << std::endl;
			break;
		case E_INF:
			std::cout << "+inff" << std::endl;
			break;
		case E_NAN:
			std::cout << "nanf" << std::endl;
			break;
		default:
			std::cout << "Unexpected float enum value" << std::endl;
			break;
		}
	}
}

void Converter::printDouble()
{
	if (_doubleValidity == false)
	{
		std::cout << "Double invalide" << std::endl;
	}
	else
	{
		switch (_doubleIntegrity)
		{
		case E_NEG_INF:
			std::cout << "-inf" << std::endl;
			break;
		case E_VALID:
			std::cout << _double << std::endl;
			break;
		case E_INF:
			std::cout << "+inf" << std::endl;
			break;
		case E_NAN:
			std::cout << "nan" << std::endl;
			break;
		default:
			std::cout << "Unexpected double enum value" << std::endl;
			break;
		}
	}
}
