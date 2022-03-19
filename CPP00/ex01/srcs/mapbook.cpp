/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapbook.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 05:01:39 by ereali            #+#    #+#             */
/*   Updated: 2022/03/19 18:05:08 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>
#include "PhoneBook.hpp"



int main(void)
{
	PhoneBook MyPhoneBook;
	std::string buff;
	std::string tab[3] = {"SEARCH", "ADD"};
	std::size_t i;

	while (buff != "EXIT")
	{
		i = 0;
		std::cin >> buff;
		while (i < 2 && buff != tab[i])
			i++;
		if (i == 0)
			MyPhoneBook.Search();
		if (i == 1)
			MyPhoneBook.AddContact();
	}
	return (0);
}
