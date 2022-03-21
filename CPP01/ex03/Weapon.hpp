/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 04:07:12 by ereali            #+#    #+#             */
/*   Updated: 2022/03/21 05:27:36 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
public:
	Weapon(std::string type);
	std::string const & getType();
	void setType(std::string type);
	~Weapon();
private:
	std::string _type;
};
#endif
