/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 01:17:11 by ereali            #+#    #+#             */
/*   Updated: 2022/04/09 02:40:29 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl  karen;
	std::string buff;

	while (buff != "EXIT")
	{
		std::cin >> buff;
		if (std::cin.eof() == true)
			break;
		karen.complain(buff);
	}
	return (0);
}
