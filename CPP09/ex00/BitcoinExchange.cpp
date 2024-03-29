#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _error(false)
{
}

BitcoinExchange::BitcoinExchange(std::string file) : _error(false)
{
	_parse_file("data.csv");
	if (_error == false)
		_calculate_all_result(file);
}

void BitcoinExchange::_parse_file(std::string csv)
{
	double value;
	std::ifstream file(csv.c_str());

	if (!file.is_open())
	{
		_error = true;
		std::cout << "Error: could not open file." << std::endl ;
		return;
	}
	std::string str_tmp;
	std::string str_tmp2;
	while (file.good() && _error == false)
	{
		std::getline(file, str_tmp, ',');
		std::getline(file, str_tmp2, '\n');
		if (!(_BitcoinExchanges.size() == 0 && str_tmp == "date" && str_tmp2 == "exchange_rate"))
		{
			value = my_stod(str_tmp2);
			if (_error == false && str_tmp != "")
				_BitcoinExchanges[str_tmp] = value;
		}
	}
	// for(std::map<std::string, double >::const_iterator it = _BitcoinExchanges.begin();
	//     it != _BitcoinExchanges.end(); ++it)
	// {
	//     std::cout << it->first << " " << it->second << " " << "\n";
	// }
}

BitcoinExchange::~BitcoinExchange()
{
}

std::list<std::string> BitcoinExchange::getResult() const
{
	return(_result);
}


bool BitcoinExchange::getError() const
{
	return(_error);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & rhs)
{
	_error = rhs._error;
	_result = rhs._result;
	_BitcoinExchanges = rhs._BitcoinExchanges;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const & rhs )
{
	_error = rhs._error;
	_result = rhs._result;
	_BitcoinExchanges = rhs._BitcoinExchanges;
	return (*this);
}

void BitcoinExchange::_calculate_all_result(std::string txt)
{
	std::ifstream file(txt.c_str());

	if (!file.is_open())
	{
	   std::cout << "Error: could not open file." << std::endl ;
	   _error = true;
	   return;
	}
	std::string str_tmp;
	while (file.good() && _error == false)
	{
	   std::getline(file, str_tmp, '\n');
	   if (!(_result.size() == 0 && str_tmp == "date | value") && file.good())
		    _add_result(str_tmp);
	}
}
void BitcoinExchange::_add_result(std::string str)
{
	double tmp;
	std::map<std::string, double >::const_iterator nearest_date;
	if (str.size() < 14)
	{
		_result.push_back("Error: bad input => " + str);
		return;
	}
	if ((str.substr(0 , 10)).find_first_not_of("0123456789-") != std::string::npos
		|| str[4] != '-' || str[7] != '-'
		|| (str.substr(10 , 3)).find_first_not_of(" |") != std::string::npos
		|| (str.substr(13 , str.size() - 13)).find_first_not_of("0123456789-,.") != std::string::npos )
	{
		_result.push_back("Error: bad input => " + str);
		return;
	}
	tmp = my_stod(str.substr(13, str.size() - 13));
	if (_date_is_good(str.substr(0, 10)) == false || _error == true)
	{
		_result.push_back("Error: bad input => " + str);
		_error = false;
		return;
	}
	nearest_date = _find_nearest_date(str.substr(0, 10));
	if (_error == true || nearest_date == _BitcoinExchanges.end())
	{
		_result.push_back("Error: bad input => " + str);
		_error = false;
	}
	else if (tmp > 1000)
		_result.push_back("Error: too large a number.");
	else if (tmp < 0)
		_result.push_back("Error: not a positive number.");
	else
		_result.push_back(str.substr(0 , 10) + " => " + str.substr(13, str.size() - 13) + " = " + my_dtos(tmp * nearest_date->second));
}

bool BitcoinExchange::_date_is_good(std::string date)
{
	double tmp = my_stod(date.substr(0 ,4));
	if (_error == true || tmp < 2009 || tmp > 2022)
		return(false);
	 tmp = my_stod(date.substr(5 ,2));
	 if (_error == true || tmp < 1 || tmp > 12)
 		return(false);
	tmp = my_stod(date.substr(8, 2));
	if (_error == true || tmp < 1 || tmp > 31)
	   return(false);
	return(true);
}

std::map<std::string, double >::const_iterator	BitcoinExchange::_find_nearest_date(std::string date)
{
	std::map<std::string, double >::const_iterator before = _BitcoinExchanges.end();
	std::map<std::string, double >::const_iterator after = _BitcoinExchanges.end();

	std::map<std::string, double >::const_iterator it_find = _BitcoinExchanges.find(date);
	if (it_find != _BitcoinExchanges.end())
		return (it_find);

	for(std::map<std::string, double >::const_iterator it = _BitcoinExchanges.begin();
		it != _BitcoinExchanges.end(); ++it)
	{
		if (it->first < date)
			before = it;
		else
			after = it;
		if ((after != _BitcoinExchanges.end() && before == _BitcoinExchanges.end())
		|| (after != _BitcoinExchanges.end() && before != _BitcoinExchanges.end()))
		{
			break;
		}
	}
	return (before);

}

double BitcoinExchange::my_stod(std::string to_cast)
{
	std::stringstream ss;
	double num;
	ss << to_cast;
	ss >> num;
	if (ss.fail())
	{
		_error = true;
		std::cout << "Error: sstream have failed" << std::endl;
	}
	return (num);
}

std::string BitcoinExchange::my_dtos(double to_cast)
{
	std::stringstream ss;
	std::string num;
	ss << to_cast;
	ss >> num;
	if (ss.fail())
	{
		_error = true;
		std::cout << "Error: sstream have failed" << std::endl;
	}
	return (num);
}
