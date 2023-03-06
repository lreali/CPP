#ifndef PMERGEME
#define PMERGEME
#include <vector>
#include <list>
#include <string>

class PmergeMe
{
	PmergeMe(char **argv, int argc);
	PmergeMe();
	~PmergeMe();
	private:
		std::list<int>;
		std::vector<int>;
	// si canonical manqu operator = et par copy

};

#endif
