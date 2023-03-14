#include "BitcoinExchange.hpp"
#include <string>
#include <iostream>

int main(int argc, char ** argv)
{
	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl ;
		return (0);
	}
	// parse file
	BitcoinExchange btc(argv[1]);
	std::list<std::string> result = btc.getResult();
	for (std::list<std::string>::iterator it= result.begin(); btc.getError() == false && it != result.end() ; ++it)
	{
		 std::cout << *it << std::endl;
	}
	return (0);
}
