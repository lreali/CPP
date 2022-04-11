#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << " WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_type = rhs._type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return(_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "*Wrong Animal sound*" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default destructor called" << std::endl;
}
