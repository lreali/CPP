/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 04:05:59 by ereali            #+#    #+#             */
/*   Updated: 2022/03/21 05:36:32 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name)
{
	_type = NULL;
}

void	HumanB::attack()
{
	if (_type != NULL)
		std::cout << _name << " attacks with their " << _type->getType() << std::endl;
	else
		std::cout << _name << " run away" << std::endl;
}

void	HumanB::setWeapon(Weapon type)
{
	*_type = type;
}

Weapon * HumanB::getWeapon()
{
	return (_type);
}

HumanB::~HumanB()
{
}
