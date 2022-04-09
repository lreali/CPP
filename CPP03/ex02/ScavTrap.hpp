#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	void attack(const std::string& target);
	ScavTrap & operator=(ScavTrap const & rhs);
	void guardGate();
	~ScavTrap();
};
