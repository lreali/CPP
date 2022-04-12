#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

# include <iostream>
# include <string>
# include <cstdlib>
class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );

		std::string getTarget() const;

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		~RobotomyRequestForm();

	private:

		void _OnExecution(Bureaucrat const & executor) const ;
		std::string _target;

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */
