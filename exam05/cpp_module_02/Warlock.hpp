#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <string>
# include <iostream>
# include "ASpell.hpp"
# include "SpellBook.hpp"

class Warlock
{
	public:
		Warlock(std::string name, std::string title);
		std::string const &getName() const;
		std::string const &getTitle() const;
		void introduce() const;
		void setTitle(std::string const & title);
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, ATarget const &target);
		~Warlock();

	private:
		Warlock();
		Warlock(Warlock const & src);
		Warlock &operator=(Warlock const &other);
		std::string _name;
		std::string _title;
		SpellBook _spellBook;
};
#endif
