#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("Default Form") , _sign(0), _execRight(1), _signRight(1)
{
	std::cout << "Form default constructor called" << std::endl;

}

Form::Form(std::string name, int execRight, int signRight) : _name(name) , _sign(0), _execRight(execRight), _signRight(signRight)
{
	std::cout << "Form constructor called" << std::endl;
	if (execRight < 1 || signRight < 1)
		throw Bureaucrat::GradeTooLowException();
	if (execRight > 150 || signRight > 150)
		throw Bureaucrat::GradeTooHighException();
}

Form::Form( const Form & src ) : _name(src._name) , _sign(0), _execRight(src._execRight), _signRight(src._signRight)
{
	std::cout << "Form copy constructor called" << std::endl;

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "Form default destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	_sign = rhs._sign;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "The Form "<< i.getName() << " have the sign value at "<< i.getSign() << " peut etre signer par les grades " << i.getSignRight() << " peut etre exec par les grades " << i.getExecRight() << "." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Form::beSigned(Bureaucrat const &human)
{
	if (human.getGrade() <= _signRight)
		_sign = 1;
	else
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int		Form::getExecRight() const
{
	return(_execRight);
}

int		Form::getSignRight() const
{
	return(_signRight);
}


bool	Form::getSign() const
{
	return(_sign);
}

void 	Form::setSign(bool sign)
{
	_sign = sign;
}

std::string	Form::getName() const
{
	return(_name);
}

/* ************************************************************************** */
