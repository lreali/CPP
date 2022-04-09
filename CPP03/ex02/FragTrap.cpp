#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_HitPoint = 100;
	this->_AttackDamage = 30 ;
	this->_EnergyPoint = 100;
	std::cout << " FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_HitPoint = 100;
	this->_AttackDamage = 30;
	this->_EnergyPoint = 100;
	std::cout << this->getName() << " FragTrap Default constructor called name" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_name = rhs._name;
	_HitPoint = rhs._HitPoint;
	_AttackDamage = rhs._AttackDamage;
	_EnergyPoint = rhs._EnergyPoint;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	if (_EnergyPoint < 1 || _HitPoint <= 0)
		return ;
	std::cout << "FragTrap "<< _name <<" ask you a high five" << std::endl;
	_EnergyPoint--;

}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "<< _name <<" Default destructor called" << std::endl;
}
