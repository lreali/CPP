
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

//
// void Warlock::learnSpell(ASpell *spell)
// {
// 	int i = 0;
// 	std::string buff = _spellBook[i]->getName();
// 	while (i < 4 && _spellBook[i] && buff.compare(spell->getName()))
// 	{
// 		i++;
// 	}
// 	if (i < 4 && !_spellBook[i])
// 		_spellBook[i] = spell;
// }
//
// void Warlock::forgetSpell(std::string spellName)
// {
// 	int i = 0;
// 	//
// 	std::string buff = _spellBook[i]->getName();
//
// 	while (i < 4 && _spellBook[i] && buff.compare(spellName))
// 	{
// 		i++;
// 	}
// 	if (i < 4 && _spellBook[i] && _spellBook[i]->getName() == spellName)
// 	{
// 		_spellBook[i] = NULL;
// 	}
// }
//
// void Warlock::launchSpell(std::string spellName, ATarget const &target)
// {
// 	int i = 0;
//
// 	std::string buff = _spellBook[i]->getName();
//
// 	while (i < 4 && _spellBook[i] && buff.compare(spellName))
// 	{
// 		i++;
// 	}
// 	if (i < 4 && _spellBook[i] && _spellBook[i]->getName() == spellName)
// 	{
// 			_spellBook[i]->launch(target);
// 	}
// }


void Warlock::learnSpell(ASpell *spell)
{
	_spellBook[spell->getName()] = spell;
}

void Warlock::forgetSpell(std::string spellName)
{
	_spellBook.erase(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget const &target)
{
	std::map<std::string, ASpell *>::iterator it;
	it = _spellBook.find(spellName);
	if (it != _spellBook.end())
		it->second->launch(target);
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
