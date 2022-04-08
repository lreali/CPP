/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:42:57 by ereali            #+#    #+#             */
/*   Updated: 2022/04/08 19:16:15 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	void setHitPoint(int const Hp);
	int	getHitPoint(void) const;
	void setEnergyPoint(int const Ep);
	int	getEnergyPoint(void) const;
	void setAttackDamage(int const Ad);
	int	getAttackDamage(void) const;
	std::string	getName(void) const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap & operator=(ClapTrap const & rhs);
	~ClapTrap();
private:
	std::string _name;
	int _HitPoint;
	int _EnergyPoint;
	int _AttackDamage;
};
