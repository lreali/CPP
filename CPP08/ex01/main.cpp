#include "span.hpp"
#include <iostream>

#include <list>

int main()
{
	Span test(15);
	Span array(5);
	Span other(3);
	try
	{
		array.addNumber(10, 1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Short : " << array.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "Large : " << array.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	array.addNumber(2, 10);

	std::cout << "Short : " << array.shortestSpan() << std::endl;
	std::cout << "Large : " << array.longestSpan() << std::endl;
	array.addNumber(3, 3);
	other.addNumber(3, 12);
	test.addNumber(6);
	test.addNumber(3);
	test.addNumber(17);
	test.addNumber(9);
	test.addNumber(11);

	std::cout << "Short : " << other.shortestSpan() << std::endl;
	std::cout << "Large : " << other.longestSpan() << std::endl;

	std::cout << "Short : " << array.shortestSpan() << std::endl;
	std::cout << "Large : " << array.longestSpan() << std::endl;

	std::cout << "Short : " << test.shortestSpan() << std::endl;
	std::cout << "Large : " << test.longestSpan() << std::endl;

	return (0);
}
