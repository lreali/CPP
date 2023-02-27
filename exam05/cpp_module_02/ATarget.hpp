#ifndef ATARGET_HPP
# define ATARGET_HPP
# include "ASpell.hpp"
# include <string>
# include <iostream>

class ASpell;

class ATarget
{
	public:
		ATarget();
		ATarget(std::string const &type);
		ATarget(ATarget const & src);
		ATarget &operator=(ATarget const &other);
		std::string const &getType() const;
		void getHitBySpell(ASpell const &spell) const;
		virtual ATarget *clone() const = 0;
		virtual ~ATarget();
	protected:
		std::string _type;
};
#endif
