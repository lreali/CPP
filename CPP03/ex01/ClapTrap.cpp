#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _HitPoint(10), _AttackDamage(0), _EnergyPoint(10)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _HitPoint(10), _AttackDamage(0), _EnergyPoint(10)
{
	std::cout << "ClapTrap "<< _name << "Default constructor called name" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

void ClapTrap::setAttackDamage(int const Ad)
{
	_AttackDamage = Ad;
}

int	ClapTrap::getAttackDamage(void) const
{
	return(_AttackDamage);
}

int	ClapTrap::getHitPoint(void) const
{
	return(_HitPoint);
}

void ClapTrap::setHitPoint(int const Hp)
{
	_HitPoint = Hp;
}

int	ClapTrap::getEnergyPoint(void) const
{
	return(_EnergyPoint);
}

void ClapTrap::setEnergyPoint(int const Ep)
{
	_EnergyPoint = Ep;
}
std::string	ClapTrap::getName(void) const
{
	return(_name);
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_name = rhs._name;
	_HitPoint = rhs._HitPoint;
	_AttackDamage = rhs._AttackDamage;
	_EnergyPoint = rhs._EnergyPoint;
	return (*this);
}
void ClapTrap::attack(const std::string& target)
{
	if (_EnergyPoint < 1 || _HitPoint <= 0)
		return ;
	std::cout << "ClapTrap "<< _name << " attacks " << target <<", causing " << _AttackDamage << " points of damage!" << std::endl;
	_EnergyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_HitPoint = _HitPoint - amount;
	if (_HitPoint <= 0)
		_HitPoint = 0;

	std::cout << "ClapTrap " << _name << " is hurt, and loose " << amount << " Hitpoint! Now have "<< _HitPoint << " HP." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoint < 1 || _HitPoint <= 0)
		return ;
	_HitPoint = _HitPoint + amount;
	std::cout << "ClapTrap "<< _name << " is saved, and win " << amount << " Hitpoint! Now have "<< _HitPoint << " HP." << std::endl;
	_EnergyPoint--;

}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "<< _name <<" Default destructor called" << std::endl;
}
