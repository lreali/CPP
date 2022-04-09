/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:53:52 by ereali            #+#    #+#             */
/*   Updated: 2022/04/09 02:28:27 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie has been created" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << name << " has been created" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << " has been deleted" << std::endl;
}
