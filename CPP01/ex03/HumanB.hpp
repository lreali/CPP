/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 04:06:04 by ereali            #+#    #+#             */
/*   Updated: 2022/03/21 23:35:18 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>
# include <string>
class HumanB
{
public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon &type);
	Weapon * getWeapon();
	~HumanB();

private:
	std::string _name;
	Weapon *_type;
};
#endif
