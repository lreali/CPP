#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_HitPoint = 100;
	this->_AttackDamage = 20 ;
	this->_EnergyPoint = 50;
	std::cout << " ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_HitPoint = 100;
	this->_AttackDamage = 20;
	this->_EnergyPoint = 50;
	std::cout << this->getName() << " ScavTrap Default constructor called name" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_name = rhs._name;
	_HitPoint = rhs._HitPoint;
	_AttackDamage = rhs._AttackDamage;
	_EnergyPoint = rhs._EnergyPoint;
	return (*this);
}
void ScavTrap::attack(const std::string& target)
{
	if (_EnergyPoint < 1 || _HitPoint <= 0)
		return ;
	std::cout << "ScavTrap "<< _name << " attacks " << target <<", causing " << _AttackDamage << " points of damage! OHHHHH" << std::endl;
	_EnergyPoint--;
}

void ScavTrap::guardGate()
{
	if (_EnergyPoint < 1 || _HitPoint <= 0)
		return ;
	std::cout << "ScavTrap "<< _name <<" is enter in GateKeeper Mode" << std::endl;
	_EnergyPoint--;

}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "<< _name <<" Default destructor called" << std::endl;
}
