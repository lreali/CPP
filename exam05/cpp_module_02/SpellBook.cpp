#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::SpellBook(SpellBook const & src)
{}

SpellBook &SpellBook::operator=(SpellBook const &other)
{
	return (*this);
}

void SpellBook::learnSpell(ASpell *spell)
{
	_spells[spell->getName()] = spell;
}

void SpellBook::forgetSpell(std::string const &spellName)
{
	_spells.erase(spellName);
}

ASpell *SpellBook::createSpell(std::string const &spellName)
{
	std::map<std::string, ASpell *>::iterator it;
	it = _spells.find(spellName);
	if (it != _spells.end())
		return (it->second);
	return (NULL);
}

SpellBook::~SpellBook()
{}
