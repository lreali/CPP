/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 03:15:19 by ereali            #+#    #+#             */
/*   Updated: 2022/03/20 22:51:14 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

class Contact
{

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _darkest_secret;

	public:
		Contact();
		void SetFirst(std::string first);
		void SetLast(std::string last);
		void SetNickname(std::string nickname);
		void SetSecret(std::string secret);
		std::string GetFirst() const;
		std::string GetLast() const;
		std::string GetNickname() const;
		std::string GetSecret() const;
		~Contact(void);
};

#endif
