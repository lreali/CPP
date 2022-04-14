#include "mutantStack.hpp"

#include <iostream>

int main()
{
	MutantStack<int> object;
	object.push(0);
	object.push(1);
	object.push(2);
	object.push(3);
	object.push(4);
	object.push(5);

	std::cout << "Result : ";
	for (MutantStack<int>::iterator it = object.begin(); it != object.end(); it++)
	{
		if (it != object.begin())
			std::cout << " - ";
		std::cout << *it;
	}
	std::cout << std::endl;
}
