#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"

# include <iostream>
# include <string>


class Bureaucrat;

class Form
{

	public:

		Form();
		Form(std::string name, int execRight, int signRight);
		Form( Form const & src );

		Form &		operator=( Form const & rhs );

		int	getExecRight() const;
		int	getSignRight() const;
		bool getSign() const;
		void setSign(bool sign);
		std::string getName() const;

		void beSigned(Bureaucrat const &human);

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("GradeTooHighException");
			}

		};
		
		class GradeTooLowException : public std::exception
		{
			 virtual const char* what() const throw()
			 {
				 return ("GradeTooLowException");
			 }
		};

		~Form();

	private:
		std::string const _name;
		bool _sign;
		int const _execRight;
		int const _signRight;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
