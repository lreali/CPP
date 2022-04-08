#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _HitPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name),
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
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

void ClapTrap::setEnergyPoint(int const Hp)
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
	_RawBits = rhs.getRawBits();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}
