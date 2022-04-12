#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
# include <iostream>
# include <string>

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );

		Form *makeForm(std::string name, std::string target);

		Intern &		operator=( Intern const & rhs );
		~Intern();

};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */
