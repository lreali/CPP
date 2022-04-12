#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() :
Form("RobotomyRequestForm", 45, 72)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("RobotomyRequestForm", 45, 72),
_target(target)
{}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) :
Form(src.getName(), src.getExecRight(), src.getSignRight()),
_target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &		RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{

	_target = rhs._target;
	setSign(rhs.getSign());

	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << "The Form "<< i.getName() << "with target " << i.getTarget() <<" have the sign value at "<< i.getSign() << " peut etre signer par les grades " << i.getSignRight() << " peut etre exec par les grades " << i.getExecRight() << "." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::_OnExecution(Bureaucrat const & executor) const
{
	(void)executor;
	if (rand() % 2 == 0)
		std::cout << _target << " your Robotomy is a sucess Congratulation !!" << std::endl;
	else
		std::cout << _target << " your Robotomy is a Failure no refund possible." << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string RobotomyRequestForm::getTarget() const
{
	return(_target);
}

/* ************************************************************************** */
