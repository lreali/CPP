
#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() :
Form("ShrubberyCreationForm", 137, 145)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form("ShrubberyCreationForm", 137, 145),
_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) :
Form(src.getName(), src.getExecRight(), src.getSignRight()),
_target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{

	_target = rhs._target;
	setSign(rhs.getSign());

	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << "The Form "<< i.getName() << "with target " << i.getTarget() <<" have the sign value at "<< i.getSign() << " peut etre signer par les grades " << i.getSignRight() << " peut etre exec par les grades " << i.getExecRight() << "." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::_OnExecution(Bureaucrat const & executor) const
{
	(void)executor;

	std::string buff = "                                                  .\n"
"                                              .         ;\n"
"                 .              .              ;%     ;;\n"
"                   ,           ,                :;%  %;\n"
"                    :         ;                   :;%;'     .,\n"
"           ,.        %;     %;            ;        %;'    ,;\n"
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
"              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
"                `%;.     ;%;     %;'         `;%%;.%;'\n"
"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
"                    `:%;.  :;bd%;          %;@%;'\n"
"                      `@%:.  :;%.         ;@@%;'\n"
"                        `@%.  `;@%.      ;@@%;\n"
"                          `@%%. `@%%    ;@@%;\n"
"                            ;@%. :@%%  %@@%;\n"
"                              %@bd%%%bd%%:;\n"
"                                #@%%%%%:;;\n"
"                                %@@%%%::;\n"
"                                %@@@%(o);  . '\n"
"                                %@@@o%;:(.,'\n"
"                            `.. %@@@o%::;\n"
"                               `)@@@o%::;\n"
"                                %@@(o)::;\n"
"                               .%@@@@%::;\n"
"                               ;%@@@@%::;.\n"
"                              ;%@@@@%%:;;;.\n"
"                          ...;%@@@@@%%:;;;;,..    ";
	std::string name = _target;
	name += "_shrubbery";
	std::ofstream ofs(name.data(), std::ofstream::out);
	if(ofs.fail())
	{
		std::cout << "Create new file Faillure" << std::endl;
		return;
	}
	ofs << buff;
	ofs.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ShrubberyCreationForm::getTarget() const
{
	return(_target);
}

/* ************************************************************************** */
