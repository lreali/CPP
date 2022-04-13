#include "converter.hpp"

Converter::Type Converter::_checkType(std::string p_str)
{
	Type ret = E_INVALID;
	size_t i =0;

	if (p_str.size() == 1 && isdigit(p_str.data()[0]) == false)
		ret = E_CHAR;
	if (p_str.data()[i] == '-')
		i++;
	for (; i < p_str.size() && isdigit(p_str.data()[i]);i++){}
	if (ret == E_INVALID && i == p_str.size())
		ret = E_INT;
	if (p_str.data()[i] == '.')
	{
		i++;
		for (; i < p_str.size() && isdigit(p_str.data()[i]);i++){}
		if (ret == E_INVALID && i == p_str.size())
			ret = E_DOUBLE;
		else if (ret == E_INVALID && i + 1 >= p_str.size() && p_str.data()[i] == 'f')
			ret = E_FLOAT;
	}
	if (p_str == "nan" || p_str == "-inf" || p_str == "+inf")
		ret = E_DOUBLE;
	if (p_str == "nanf" || p_str == "-inff" || p_str == "+inff")
		ret = E_FLOAT;
	return (ret);
}

Converter::Converter()
{
	_char_validity = false;
	_char = '\0';

 	_int_validity = false;
	_int = 0;

	_float_validity = false;
	_float_integrity = E_VALID;
	_float = 0.0f;

	_double_validity = false;
	_double_integrity = E_VALID;
	_double = 0.0;
	parse("");

}
Converter::Converter(std::string p_str)
{
	_char_validity = false;
	_char = '\0';

 	_int_validity = false;
	_int = 0;

	_float_validity = false;
	_float_integrity = E_VALID;
	_float = 0.0f;

	_double_validity = false;
	_double_integrity = E_VALID;
	_double = 0.0;
	parse(p_str);

}
Converter::Converter(const Converter& p_other)
{
	*this = p_other;
}

void Converter::_parseChar(std::string p_str)
{
	_char_validity = true;
	_int_validity = true;
	_float_validity = true;
	_double_validity = true;
	_char = p_str.data()[0];
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}

void Converter::_parseInt(std::string p_str)
{
	_int_validity = true;
	_float_validity = true;
	_double_validity = true;
	_int = atoi(p_str.data());
	if (_int < 128 && _int >= 0)
		_char_validity = true;
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
}

void Converter::_parseDouble(std::string p_str)
{
	if (p_str == "nan")
	 	_double_integrity = E_NAN;
	else if (p_str == "-inf")
	 	_double_integrity = E_NEG_INF;
	else if (p_str == "+inf")
	 	_double_integrity = E_INF;
	else
		_double_integrity = E_VALID;

	_float_integrity = _double_integrity;
	_int_validity = (_double_integrity == E_VALID ? true: false);
	_float_validity = true;
	_double_validity = true;
	_float = atof(p_str.data());
	_int = static_cast<int>(_float);
	if (_int < 128 && _int >= 0)
		_char_validity = true;
	_char = static_cast<char>(_float);
	_double = static_cast<double>(_float);
}


void Converter::_parseFloat(std::string p_str)
{
	if (p_str == "nanf")
	 	_float_integrity = E_NAN;
	else if (p_str == "-inff")
	 	_float_integrity = E_NEG_INF;
	else if (p_str == "+inff")
	 	_float_integrity = E_INF;
	else
		_float_integrity = E_VALID;

	_double_integrity = _float_integrity;
	_int_validity = (_float_integrity == E_VALID ? true: false);
	_float_validity = true;
	_double_validity = true;
	_float = atof(p_str.data());
	_int = static_cast<int>(_float);
	if (_int < 128 && _int >= 0)
		_char_validity = true;
	_char = static_cast<char>(_float);
	_double = static_cast<double>(_float);
}

void Converter::parse(std::string p_str)
{
	if (p_str == "")
	{
		std::cout << "Unable to parse empty string" << std::endl;
	}
	else
	{
		Type tmp_type = _checkType(p_str);
		switch (tmp_type)
		{
			case E_CHAR :
				_parseChar(p_str);
				break;
			case E_INT :
				_parseInt(p_str);
				break;
			case E_FLOAT :
				_parseFloat(p_str);
				break;
			case E_DOUBLE :
				_parseDouble(p_str);
				break;
			case E_INVALID :
			default : ;
		}
	}
}

const Converter& Converter::operator =(const Converter& p_other)
{
	_char_validity = p_other._char_validity;
	_char = p_other._char;

	_int_validity = p_other._int_validity;
	_int = p_other._int;

	_float_validity = p_other._float_validity;
	_float = p_other._float;

	_double_validity = p_other._double_validity;
	_double = p_other._double;
	return (*this);
}

Converter::~Converter()
{

}

void Converter::printChar()
{
	// std::cout << __LINE__ << "::" <<  std::boolalpha << _char_validity  << '\n';

	if (_char_validity == false)
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
	if (_int_validity == false)
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
	if (_float_validity == false)
	{
		std::cout << "Float invalide" << std::endl;
	}
	else
	{
		switch (_float_integrity)
		{
		case E_NEG_INF:
			std::cout << "-inff" << std::endl;
			break;
		case E_VALID:
			std::cout << _float << std::endl;
			break;
		case E_INF:
			std::cout << "inff" << std::endl;
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
	if (_double_validity == false)
	{
		std::cout << "Double invalide" << std::endl;
	}
	else
	{
		switch (_double_integrity)
		{
		case E_NEG_INF:
			std::cout << "-inf" << std::endl;
			break;
		case E_VALID:
			std::cout << _double << std::endl;
			break;
		case E_INF:
			std::cout << "inf" << std::endl;
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
