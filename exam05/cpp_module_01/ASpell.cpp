#include "ASpell.hpp"

ASpell::ASpell()
{}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects)
{}

ASpell::ASpell(ASpell const & src) : _name(src._name), _effects(src._effects)
{}

ASpell &ASpell::operator=(ASpell const &other)
{
	_name = other._name;
	_effects = other._effects;
	return (*this);
}

std::string ASpell::getName() const
{
	return (_name);
}

std::string ASpell::getEffects() const
{
	return (_effects);
}

void ASpell::launch(ATarget const & target)
{
	target.getHitBySpell(*this);
}

ASpell::~ASpell()
{}
