#include "Array.hpp"

#include <iostream>

int main()
{
	Array<char> array_char(4);
	Array<int> array_int(4);
	Array<double> array_double(4);
	
	array_char[0] = 'c';
	array_char[1] = 'e';
	array_char[2] = 'c';
	array_char[3] = 'i';

	array_int[0] = 0;
	array_int[1] = 1;
	array_int[2] = 2;
	array_int[3] = 3;

	array_double[0] = 0.0;
	array_double[1] = 0.5;
	array_double[2] = 1.2;
	array_double[3] = 1.8;

	for (size_t i = 0; i < 4; i++)
		std::cout << array_char[i];
	std::cout << std::endl;

	for (size_t i = 0; i < 4; i++)
		std::cout << array_int[i];
	std::cout << std::endl;

	for (size_t i = 0; i < 4; i++)
		std::cout << array_double[i];
	std::cout << std::endl;

	return (0);
}
