#ifndef BITCOIN
#define BITCOIN
#include <map>
#include <list>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
class BitcoinExchange
{
	public:
	BitcoinExchange(std::string file);
	BitcoinExchange();
	~BitcoinExchange();
	std::list<std::string> getResult() const;
	bool getError() const;
	BitcoinExchange(BitcoinExchange const & rhs);
	BitcoinExchange &operator=(BitcoinExchange const & rhs );
	private:
		void _add_result(std::string str);
		double my_stod(std::string to_cast);
		std::string my_dtos(double to_cast);
		void _parse_file(std::string file);
		void _calculate_all_result(std::string file);
		bool _date_is_good(std::string date);
		std::map<std::string, double >::const_iterator	_find_nearest_date(std::string date);
		// unsigned int _date_in_days(std::string date);
		// unsigned int my_stoui(std::string to_cast);
		std::list<std::string> _result;
		bool	_error;
		std::map<std::string, double> _BitcoinExchanges;
};

#endif

// si canonical manqu operator = et par copy
