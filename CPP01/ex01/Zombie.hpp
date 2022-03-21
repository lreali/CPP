/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:44:22 by ereali            #+#    #+#             */
/*   Updated: 2022/03/21 03:02:10 by ereali           ###   ########.fr       */
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
	void SetName(std::string name);
	~Zombie();

private:
	std::string _name;
};

Zombie*    zombieHorde(int N, std::string name);

#endif
