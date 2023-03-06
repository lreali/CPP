#ifndef BITCOIN
#define BITCOIN
#include <map>
#include <string>

class BitcoinExchange
{
	BitcoinExchange();
	~BitcoinExchange();
	private:
		std::map<std::string, int> BitcoinValues;
};

#endif

// si canonical manqu operator = et par copy
