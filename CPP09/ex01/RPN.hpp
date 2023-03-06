#ifndef RPN
#define RPN
#include <deque>
#include <string>

class RPN
{
	RPN(std::string rpn);
	RPN();
	~RPN();
	private:
		std::deque<std::string, int> BitcoinValues;
	// si canonical manqu operator = et par copy

};

#endif
