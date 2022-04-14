#include "Span.hpp"
#include <numeric>
#include <algorithm>
#include <exception>
#include <iostream>


Span::Span()
{
}

Span::Span(size_t size)
{
	_max_size = size;
}

Span::Span(const Span& other)
{
	*this = other;
}

const Span& Span::operator =(const Span& other)
{
	assign(other.begin(), other.end());
	_max_size = other._max_size;
	return (*this);
}

Span::~Span()
{

}

void Span::addNumber(int value)
{
	if (size() < _max_size)
	{
		push_back(value);
	}
	else
		throw std::logic_error("Span : Segfault - Array too short to contain a new int");
}

void Span::addNumber(int n, int value)
{
	if (size() > _max_size || size() + n > _max_size)
		throw std::logic_error("Span : Segfault - Array too short to contain this amount of int");
	while (size() < _max_size && n > 0)
	{
		push_back(value);
		n--;
	}
}

int Span::shortestSpan()
{
	if (size() <= 1)
		throw std::logic_error("Span : Internal error - Not enought value to execute a shortestSpan call");

	std::vector<int> tmp(*this);
	sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	return (*std::min_element(tmp.begin() + 1, tmp.end()));
}

int Span::longestSpan()
{
	if (size() <= 1)
		throw std::logic_error("Span : Internal error - Not enought value to execute a longestSpan call");
	std::vector<int> tmp(*this);
	return (*std::max_element(tmp.begin(), tmp.end()) - *std::min_element(tmp.begin() + 1, tmp.end()));
}
