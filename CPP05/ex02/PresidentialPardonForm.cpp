#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() :
Form("PresidentialPardonForm", 5, 25)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("PresidentialPardonForm", 5, 25),
_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) :
Form(src.getName(), src.getExecRight(), src.getSignRight()),
_target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &		PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{

	_target = rhs._target;
	setSign(rhs.getSign());
	return *this;
}

std::ostream &		operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << "The Form "<< i.getName() << "with target " <<  i.getTarget() <<" have the sign value at "<< i.getSign() << " peut etre signer par les grades " << i.getSignRight() << " peut etre exec par les grades " << i.getExecRight() << "." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::_OnExecution(Bureaucrat const & executor) const
{
	(void)executor;
	std::cout << _target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string PresidentialPardonForm::getTarget() const
{
	return(_target);
}

/* ************************************************************************** */
