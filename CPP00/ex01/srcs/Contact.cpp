/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 03:11:08 by ereali            #+#    #+#             */
/*   Updated: 2022/03/18 19:51:13 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Contact.hpp>

Contact::Contact() {}

// Contact::Contact(std::string first, std::string last, std::string surnom, std::string secret)
// 	: _first_name(first), _last_name(last), _nickname(surnom), _darkest_secret(secret) {}

std::string	Contact::GetFirst() const
{
	return (_first_name);
}

std::string	Contact::GetLast() const
{
	return (_last_name);
}

std::string	Contact::GetSecret() const
{
	return (_darkest_secret);
}

std::string	Contact::GetNickname() const
{
	return (_nickname);
}

void	Contact::SetFirst(std::string first)
{
	_first_name = first;
}

void	Contact::SetLast(std::string last)
{
	_last_name = last;
}

void	Contact::SetNickname(std::string nickname)
{
	_nickname = nickname;
}

void	Contact::SetSecret(std::string secret)
{
	_darkest_secret = secret;
}

Contact::~Contact() {}
