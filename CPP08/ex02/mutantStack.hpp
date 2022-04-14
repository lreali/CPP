#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;

	MutantStack() : std::stack<T, Container>() {};
	~MutantStack() {};
	MutantStack(const MutantStack &mstack)
	{
		*this = mstack;
	};

	MutantStack	&operator=(const MutantStack<T> &mstack)
	{
		static_cast< std::stack<T> >(*this) = static_cast< std::stack<T> >(mstack);
		return (*this);
	}

	iterator begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}

	const_iterator begin() const
	{
		return this->c.begin();
	}

	const_iterator end() const
	{
		return this->c.end();
	}
};

#endif
