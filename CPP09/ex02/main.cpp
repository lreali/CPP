#include <iostream>
#include <string>
#include "PmergeMe.hpp"



int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Nothing to sort" << std::endl;
		return (0);
	}
	PmergeMe current(argc , argv);
	if (current.getError())
	{
		std::cout << "Error" << std::endl;
		return (1);
	}

	std::cout << "Before: ";
	for (int i = 1; i < argc; i++)
	{
		std::cout << argv[i];
		if (i != argc - 1)
			std::cout << " ";
		else
			std::cout << std::endl;
	}

	std::cout << "After: ";
	std::cout << "multiset : ";
	std::multiset<int> multiset(current.getMultiset());
	size_t i = 0;
	for(std::multiset<int>::iterator it = multiset.begin(); it != multiset.end(); it++, i++)
	{
	  std::cout << *it ;
	  if (multiset.size() - 1 != i)
		  std::cout << ' ';
	}
	std::cout << std::endl;

	// print priority queue result :
	// std::priority_queue<int, std::deque<int>, std::greater<int> > pqueue(current.getPqueue());
	// std::cout << "priority_queue : ";
	// for (; !pqueue.empty(); pqueue.pop())
    //     std::cout << pqueue.top() << ' ';
    // std::cout << std::endl;

	std::cout << "Time to process a range of "<< multiset.size() <<" elements with std::multiset : " << current.getMultisetSpeed() << " us" << std::endl;
	std::cout << "Time to process a range of "<< multiset.size() <<" elements with std::priority_queue : " << current.getPriorityQueueSpeed() << " us" << std::endl;

	return (0);
}
