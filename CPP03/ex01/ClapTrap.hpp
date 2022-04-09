/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:42:57 by ereali            #+#    #+#             */
/*   Updated: 2022/04/09 19:44:35 by ereali           ###   ########.fr       */
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
	void setName(std::string const name);
	std::string	getName(void) const;

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap & operator=(ClapTrap const & rhs);
	virtual ~ClapTrap();
protected:
	std::string _name;
	int _HitPoint;
	int _AttackDamage;
	int _EnergyPoint;

};
