/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:04:28 by ereali            #+#    #+#             */
/*   Updated: 2022/03/21 02:54:42 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **)
{

	Zombie Pierre("Pierre");
	Zombie *Horde = zombieHorde(argc, "ZOMBIE");
	Pierre.announce();
	for (int i = 0; i < argc; i++)
	{
		Horde[i].announce();
	}
	delete [] Horde;
	return (0);
}
