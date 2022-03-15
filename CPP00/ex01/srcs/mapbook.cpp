/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapbook.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 05:01:39 by ereali            #+#    #+#             */
/*   Updated: 2022/03/15 05:17:37 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>
// #include "PhoneBook.hpp"



int main(void)
{
	// PhoneBook MyPhoneBook;
	std::string buff;
	std::string tab[3] = {"EXIT", "SEARCH", "ADD"};
// ptr sur fct exit search add
	std::size_t i;

	while (buff != "EXIT")
	{
		i = 0;

		std::cin >> buff;
		while (i < 3 && buff != tab[i])
			i++;
		if (i < 3)
			std::cout << "Salut" << '\n';
			// fct[i];
	}
	return (0);
}
