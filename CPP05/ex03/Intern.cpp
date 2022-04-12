#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;

	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


Form *Intern::makeForm(std::string name, std::string target)
{
	std::string tab[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
		//tableau de pointeur sur fct et de string name
	int i = 0;
	while(i < 3 && tab[i] != name)
	{
		i++;
	}
	switch (i)
	{

		case 0:
			return(new PresidentialPardonForm(target));

		case 1:
			return(new ShrubberyCreationForm(target));

		case 2:
			return(new RobotomyRequestForm(target));

		default :
			std::cout << "You enter a wrong form name." << std::endl;
			return( NULL);
	}

}

/* ************************************************************************** */
