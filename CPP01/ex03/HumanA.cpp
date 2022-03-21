/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 04:05:47 by ereali            #+#    #+#             */
/*   Updated: 2022/03/21 05:35:39 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & type):_name(name), _type(type)
{
}

void	HumanA::attack()
{
	std::cout << _name << "attacks with their" << _type.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon type)
{
	_type = type;
}

Weapon & HumanA::getWeapon()
{
	return (_type);
}

HumanA::~HumanA()
{}
