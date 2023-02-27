#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
#include "ASpell.hpp"
# include <string>
# include <iostream>
# include <map>

class SpellBook
{
	private:
		SpellBook(SpellBook const & src);
		SpellBook &operator=(SpellBook const &other);

	public:
		std::map<std::string, ASpell *> _spells;
		SpellBook();
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellName);
		ASpell *createSpell(std::string const &spellName);
		virtual ~SpellBook();
};
#endif
