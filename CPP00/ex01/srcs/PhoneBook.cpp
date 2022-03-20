/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 04:30:51 by ereali            #+#    #+#             */
/*   Updated: 2022/03/20 22:33:22 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
// Constructeur , destructeur , ft search et ft_add

PhoneBook::PhoneBook() : _nbContact(0), _list() {}

std::string PhoneBook::Trunc(std::string to_trunc)
{
	std::string newstring(to_trunc);
	if (newstring.length() < 10)
		return (to_trunc);
	else
	{
		newstring.resize(9);
		newstring.append(".");
	}
	return (newstring);
}

void PhoneBook::Search()
{
	std::string buff;
	int i = 0;

	if (_nbContact == 0)
	{
		std::cout << "You don't have any Contact, please ADD one" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << std::endl;
	while (_nbContact > i && i < 8)
	{
		std::cout << std::setw(10) << i << "|" << std::setw(10) << Trunc(_list[i].GetFirst()) << "|" << std::setw(10) << Trunc(_list[i].GetLast()) << "|" << std::setw(10) << Trunc(_list[i].GetNickname()) << std::endl;
		i++;
	}
	std::cout << "please enter an index" << std::endl;
	std::cin >> buff;
	try
	{
		i = std::stoi(buff);
	} catch (std::exception &) {}
	if (i < 8 && _nbContact > i)
		std::cout << _list[i].GetFirst() << std::endl << _list[i].GetLast() << std::endl << _list[i].GetNickname() << std::endl << _list[i].GetSecret() << std::endl;
	else
		std::cout << "You enter a wrong index" << '\n';
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
	_nbContact += 1;
}

PhoneBook::~PhoneBook() {}
