/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 03:11:08 by ereali            #+#    #+#             */
/*   Updated: 2022/03/15 05:15:46 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Contact.hpp>

Contact::Contact(std::string first, std::string last, std::string surnom, std::string secret)
	: first_name(first), last_name(last), nickname(surnom), darkest_secret(secret) {}
