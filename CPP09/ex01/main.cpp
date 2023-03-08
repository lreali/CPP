#include "RPN.hpp"
#include <iostream>
#include <string>
 // test "+" segmentation fault
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl << "Exemple: ./RPN \"[RPN expression]\"" << std::endl;
		return (0);
	}
	RPN expression(argv[1]);
	if (expression.getError() == false)
		std::cout << expression.getResult() << std::endl;
	return (0);
}
