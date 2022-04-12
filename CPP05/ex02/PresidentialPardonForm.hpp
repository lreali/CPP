#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
# include <iostream>
# include <string>

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );

		std::string getTarget() const;

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		~PresidentialPardonForm();

	private:

		void _OnExecution(Bureaucrat const & executor) const ;
		std::string _target;

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */
