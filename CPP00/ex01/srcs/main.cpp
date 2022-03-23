/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 05:01:39 by ereali            #+#    #+#             */
/*   Updated: 2022/03/20 22:52:16 by ereali           ###   ########.fr       */
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

	std::cout << "-------------HOME---------" << std::endl;
	std::cout << "You can use : ADD to add a contact, SEARCH to find a contact already add, EXIT to exit" << std::endl;
	while (buff != "EXIT")
	{
		std::cin >> buff;
		if (buff == "SEARCH")
		{
			MyPhoneBook.Search();
			std::cout << "You're back to home" << std::endl;
		}
		else if (buff == "ADD")
		{
			MyPhoneBook.AddContact();
			std::cout << "You're back to home" << std::endl;
		}
		else if (buff != "EXIT")
			std::cout << "Please enter a valid command : ADD to add a contact, SEARCH to find a contact already add, EXIT to exit" << std::endl;
	}
	return (0);
}
