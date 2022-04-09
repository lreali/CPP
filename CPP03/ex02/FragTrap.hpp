#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	void highFivesGuys();
	FragTrap & operator=(FragTrap const & rhs);
	~FragTrap();
};
