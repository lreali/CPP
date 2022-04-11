#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << " WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_type = rhs._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Miaou Miaou 🐱" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default destructor called" << std::endl;
}
