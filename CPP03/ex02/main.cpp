/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 04:54:52 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 04:56:07 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void ) {
	ClapTrap *s = new FragTrap("Piou");
	FragTrap a("A");
	FragTrap clapy("Clapy");

	clapy.attack("Poubelle1");
	clapy.attack("Poubelle2");
	clapy.attack("Poubelle3");
	clapy.attack("Poubelle4");
	clapy.beRepaired( 2 );
	clapy.attack("Poubelle6");
	clapy.attack("Poubelle7");
	clapy.attack("Poubelle8");
	clapy.attack("Poubelle9");
	clapy.attack("Poubelle10");
	clapy.attack("Poubelle11");
	clapy.takeDamage(0);
	clapy.takeDamage(1);
	clapy.attack("Poubelle12");
	clapy.attack("Poubelle");
	clapy.attack("Poubelle");
	clapy.highFivesGuys();
	a.takeDamage(8);
	a.takeDamage(4);
	a.beRepaired( 2 );
	s->attack("Poubelle");

	delete s;
	return 0;
}
