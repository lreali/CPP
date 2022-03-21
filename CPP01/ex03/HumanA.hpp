/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 04:05:54 by ereali            #+#    #+#             */
/*   Updated: 2022/03/21 05:35:15 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
public:
	HumanA(std::string name, Weapon & type);
	void attack();
	void setWeapon(Weapon type);
	Weapon & getWeapon();
	~HumanA();
private:
	std::string _name;
	Weapon &_type;

};
#endif
