/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 02:14:51 by ereali            #+#    #+#             */
/*   Updated: 2022/03/21 02:59:50 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"


Zombie*    zombieHorde(int N, std::string name)
{
	Zombie *Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		Horde[i].SetName(name);
	return (Horde);
}
