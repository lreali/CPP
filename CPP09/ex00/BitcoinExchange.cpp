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
			if (_error == false)
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
	std::ifstream file(txt);

	if (!file.is_open())
	{
	   std::cout << "Error: could not open file." << std::endl ;
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
	tmp = my_stod(str.substr(13, str.size() - 13));
	if (_date_is_good(str.substr(0, 10)) == false || _error == true)
	{
		_result.push_back("Error: bad input => " + str);
		return;
	}
	nearest_date = _find_nearest_date(str.substr(0, 10));
	if (_error == true)
		_result.push_back("Error: bad input => " + str);
	if (tmp > 1000)
		_result.push_back("Error: too large a number.");
	else if (tmp < 0)
		_result.push_back("Error: not a positive number.");
	else
		_result.push_back(str.substr(0 , 10) + " => " + str.substr(13, str.size() - 13) + " = " + my_dtos(tmp * nearest_date->second));
}

bool BitcoinExchange::_date_is_good(std::string date)
{
	double tmp = my_stod(date.substr(0 ,4));
	if (_error == true || tmp < 2009 || tmp > 2023)
		return(false);
	 tmp = my_stod(date.substr(5 ,2));
	 if (_error == true || tmp < 1 || tmp > 12)
 		return(false);
	tmp = my_stod(date.substr(8 ,2));
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
	if ((after != _BitcoinExchanges.end() && before == _BitcoinExchanges.end()))
		return (after);
	if ((after == _BitcoinExchanges.end() && before != _BitcoinExchanges.end()))
		return (before);

	unsigned int diff_before = _date_in_days(date) - _date_in_days(before->first);
	unsigned int diff_after = _date_in_days(after->first) - _date_in_days(date);
	return ((diff_before >= diff_after) ? after : before);
}

unsigned int BitcoinExchange::_date_in_days(std::string date)
{
	unsigned int days = 0;
	unsigned int tmp = my_stoui(date.substr(0 ,4));
	days = 365 * (tmp - 1);
	tmp = my_stoui(date.substr(5 ,2));
	days += 31 * (tmp - 1);
	tmp = my_stoui(date.substr(8 ,2));
	days += tmp;
	return days;
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

unsigned int BitcoinExchange::my_stoui(std::string to_cast)
{
	std::stringstream ss;
	unsigned int num;
	ss << to_cast;
	ss >> num;
	if (ss.fail())
	{
		_error = true;
		std::cout << "Error: sstream have failed" << '\n';
	}
	return (num);
}
