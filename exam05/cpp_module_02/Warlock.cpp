
#include "Warlock.hpp"

Warlock::Warlock() {}


Warlock::Warlock(Warlock const & src) : _name(src._name), _title(src._title)
{
}

Warlock::Warlock(std::string const name, std::string const title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

std::string const & Warlock::getName() const
{
	return (_name);
}

void  Warlock::setTitle(std::string const & title)
{
	_title = title;
}

std::string const & Warlock::getTitle() const
{
	return (_title);
}

void Warlock::learnSpell(ASpell *spell)
{
	_spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName)
{
	_spellBook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget const &target)
{
	_spellBook.createSpell(spellName)->launch(target);
}


Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

Warlock &Warlock::operator=(Warlock const &other){
	return (*this);
}
