/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 04:07:18 by ereali            #+#    #+#             */
/*   Updated: 2022/03/21 05:02:01 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

std::string const &Weapon::getType()
{
	std::string const &typeREF = _type;
	return (typeREF);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{}
