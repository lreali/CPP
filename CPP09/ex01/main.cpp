#include <iostream>
#include <string>

int main(int argc, charr **argv)
{
	if (argc != 2)
		std::cout << "Wrong number of arguments" << std::endl << "Exemple: ./RPN \"[RPN expression]\"" << std::endl;
	// strok de argv1 to cut spaces
	RPN(argv[1]);
	std::cout << result() << std::endl;
	return (0);
}
// cut all space from string and do math with a switch
// create a deque with all caractere read and do the calculation at the same time
