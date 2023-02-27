#include "ATarget.hpp"

ATarget::ATarget()
{}

ATarget::ATarget(std::string const &type) : _type(type)
{}

ATarget::ATarget(ATarget const & src) : _type(src._type)
{}

ATarget &ATarget::operator=(ATarget const &other)
{
	_type = other._type;
	return (*this);
}

std::string const &ATarget::getType() const
{
	return (_type);
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << std::endl;
}

ATarget::~ATarget()
{}
