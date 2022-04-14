#ifndef SPAN_H
#define SPAN_H

#include <stddef.h>
#include <vector>

class Span : public std::vector<int>
{
private:
	size_t _max_size;

public:
	Span();
	Span(size_t size);
	Span(const Span& other);
	const Span& operator =(const Span& other);
	~Span();

	void addNumber(int value);
	void addNumber(int first, int last);
	int shortestSpan();
	int longestSpan();
};

#endif
