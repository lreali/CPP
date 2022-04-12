#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
#include <fstream>
# include <iostream>
# include <string>

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );

		std::string getTarget() const;

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		~ShrubberyCreationForm();

	private:

		void _OnExecution(Bureaucrat const & executor) const ;
		std::string _target;

};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
