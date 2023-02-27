#ifndef ASPELL_HPP
# define ASPELL_HPP
#include "ATarget.hpp"
# include <string>
# include <iostream>

class ATarget;

class ASpell
{
	public:
		ASpell();
		ASpell(std::string name, std::string effects);
		ASpell(ASpell const & src);
		ASpell &operator=(ASpell const &other);
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell *clone() const = 0;
		void launch(ATarget const &target);
		virtual ~ASpell();
	protected:
		std::string _name;
		std::string _effects;
};
#endif
