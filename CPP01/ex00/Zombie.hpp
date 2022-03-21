/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:44:22 by ereali            #+#    #+#             */
/*   Updated: 2022/03/21 01:45:43 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{

public:
	Zombie();
	Zombie(std::string name);
	void announce(void);
	~Zombie();

private:
	std::string _name;

};

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif
