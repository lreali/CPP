/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 04:29:51 by ereali            #+#    #+#             */
/*   Updated: 2022/03/20 19:38:09 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		std::string Trunc(std::string to_trunc);
		void Search(void);
		void AddContact(void);
		~PhoneBook(void);

	private:
		int _nbContact;
		Contact _list[8];
};

#endif
