#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv) : _error(false), _multiset_speed(0), _priority_queue_speed(0)
{
	std::string args[argc - 1];
	std::deque<int> not_sort;
	for(int i = 1; _error == false && i < argc; i++)
	{
		 args[i - 1] = argv[i];
		if (args[i -1].find_first_not_of("0123456789") != std::string::npos)
		{
			_error = true;
		}
		not_sort.push_back(my_stoi(args[i - 1]));
		if (not_sort[i - 1] < 0)
			_error = true;
	}

	if (_error == false)
	{
		setPriorityQueueSpeed(not_sort);
		setMultisetSpeed(not_sort);
	}
}

PmergeMe::PmergeMe(const PmergeMe &PmergeMe)
{
	*this = PmergeMe;
}

clock_t						PmergeMe::getMultisetSpeed() const
{
	return(_multiset_speed);
}

clock_t 					PmergeMe::getPriorityQueueSpeed() const
{
	return(_priority_queue_speed);
}

bool						PmergeMe::getError() const
{
	return(_error);
}

std::multiset<int>				PmergeMe::getMultiset() const
{
	return(_multiset);
}

std::priority_queue<int, std::deque<int>, std::greater<int> > 	PmergeMe::getPqueue() const
{
	return(_Pqueue);
}

void	PmergeMe::setMultisetSpeed(const std::deque<int> not_sort)
{
	 clock_t begin = clock();
	 // slower
	 // _multiset.insert(not_sort.begin(), not_sort.end());
	 for (size_t i = 0; i < not_sort.size() ; i++)
	 {
		  _multiset.insert(not_sort[i]);
	 }
	 clock_t end = clock();
	 _multiset_speed = (end -  begin) * 1000000 / CLOCKS_PER_SEC;
}

void 						PmergeMe::setPriorityQueueSpeed(const std::deque<int> not_sort)
{
	 clock_t begin = clock();

	 for (size_t i = 0; i < not_sort.size() ; i++)
	 {
		  _Pqueue.push(not_sort[i]);
	 }
	 clock_t end = clock();
	 _priority_queue_speed = (end -  begin) * 1000000 / CLOCKS_PER_SEC;
}

PmergeMe::~PmergeMe()
{}

PmergeMe &					PmergeMe::operator=( PmergeMe const & rhs )
{
	_error = rhs._error;
	_multiset_speed = rhs._multiset_speed;
	_priority_queue_speed = rhs._priority_queue_speed;
	_multiset = rhs._multiset;
	_Pqueue = rhs._Pqueue;
	return (*this);
}

unsigned int PmergeMe::my_stoi(std::string to_cast)
{
	std::stringstream ss;
	unsigned int num;
	ss << to_cast;
	ss >> num;
	if (ss.fail())
	{
		_error = true;
	}
	return (num);
}

PmergeMe::PmergeMe()
{}
