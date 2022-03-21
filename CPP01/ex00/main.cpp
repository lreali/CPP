/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:04:28 by ereali            #+#    #+#             */
/*   Updated: 2022/03/21 02:45:17 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie Pierre("Pierre");
	randomChump("Paul");
	Zombie *Jacque = newZombie("Jacque");

	Pierre.announce();
	Jacque->announce();
	delete Jacque;
	return (0);
}
