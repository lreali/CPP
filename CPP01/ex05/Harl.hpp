/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 01:17:07 by ereali            #+#    #+#             */
/*   Updated: 2022/03/23 02:05:08 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Harl
{

public:
	Harl();
	void	complain(std::string level);
	~Harl();

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};
typedef void (Harl::*fct)(void);
