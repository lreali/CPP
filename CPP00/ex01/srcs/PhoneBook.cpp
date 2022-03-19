/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 04:30:51 by ereali            #+#    #+#             */
/*   Updated: 2022/03/19 18:10:09 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
// Constructeur , destructeur , ft search et ft_add

PhoneBook::PhoneBook() : _nbContact(0), _list() {}

void PhoneBook::Search()
{
	int buff;
	int i = 0;

	if (_nbContact == 0)
	{
		std::cout << "You don't have any Contact, please ADD one" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << std::endl;
	while (_nbContact > i && i < 8)
	{
		std::cout << std::setw(10) << i << "|" << std::setw(10) << _list[i].GetFirst() << "|" << std::setw(10) << _list[i].GetLast() << "|" << std::setw(10) << _list[i].GetNickname() << std::endl;
		i++;
	}
	std::cout << "please enter an index" << std::endl;
	std::cin >> buff;
	if (buff < 8 && _nbContact > buff)
		{
			std::cout << _list[buff].GetFirst() << std::endl << _list[buff].GetLast() << std::endl << _list[buff].GetNickname() << std::endl << _list[buff].GetSecret() << std::endl;

		}
}

void PhoneBook::AddContact()
{
	std::string buff;
	std::cout << "Please enter First Name, Last Name, Nickname, Secret in this order" << '\n';
	std::cin >> buff;
	_list[_nbContact % 8].SetFirst(buff);
	std::cin >> buff;
	_list[_nbContact % 8].SetLast(buff);
	std::cin >> buff;
	_list[_nbContact % 8].SetNickname(buff);
	std::cin >> buff;
	_list[_nbContact % 8].SetSecret(buff);
	// std::cout << "j'ai etait set a "<< _list[_nbContact % 8].GetFirst() << "je suis le numero" << _nbContact <<'\n';
	_nbContact += 1;
}

PhoneBook::~PhoneBook() {}
