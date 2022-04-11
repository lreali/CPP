#include "Brain.hpp"

Brain::Brain()
{
}

Brain::Brain( const Brain & src )
{
	*this = src;
}

Brain::~Brain()
{
}

Brain &	Brain::operator=( Brain const & rhs )
{
	int i =0;

	if ( this != &rhs )
	{
		while (i < 100)
		{
			this->_ideas[i] = rhs._ideas[i];
			i++;
		}
	}
	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Brain::setIdeas(std::string ideas)
{
	int i = 0;
	while (i < 100)
	{
		_ideas[i] = ideas;
		i++;
	}
}
/* ************************************************************************** */
