#include "Brain.hpp"

Brain::Brain()
{
	int i = 0;
	while (i < 100)
	{
		this->_ideas[i] = "Brain typical Ideas";
		i++;
	}
	std::cout << "Brain Default constructor called" << std::endl;

}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain Default destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = brain._ideas[i];
	return (*this);
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
//
std::string Brain::getIdeas(int i)
{
	return (_ideas[i]);
}


/* ************************************************************************** */
