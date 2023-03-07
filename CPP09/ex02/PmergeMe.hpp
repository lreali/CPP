#ifndef PMERGEME
#define PMERGEME
#include <deque>
#include <queue>
#include <set>
#include <string>
#include <time.h>
#include <sstream>
#include <iostream>

class PmergeMe
{
	public:
	PmergeMe(int argc, char **argv);
	PmergeMe(const PmergeMe &PmergeMe);
	bool						getError() const ;
	clock_t						getMultisetSpeed() const;
	clock_t 					getPriorityQueueSpeed() const;
	std::multiset<int>				getMultiset() const;
	std::priority_queue<int, std::deque<int>, std::greater<int> > 	getPqueue() const;
	~PmergeMe();
	PmergeMe &					operator=( PmergeMe const & rhs );

	private:
	void						setMultisetSpeed(const std::deque<int> not_sort);
	void 						setPriorityQueueSpeed(const std::deque<int> not_sort);
	PmergeMe();
	bool						_error;
	clock_t						_multiset_speed;
	clock_t 					_priority_queue_speed;
	std::multiset<int> 				_multiset;
	unsigned int				my_stoi(std::string to_cast);
	std::priority_queue<int, std::deque<int>, std::greater<int> >	_Pqueue;


};


#endif
