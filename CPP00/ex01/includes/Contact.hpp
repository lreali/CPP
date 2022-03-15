/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 03:15:19 by ereali            #+#    #+#             */
/*   Updated: 2022/03/15 05:15:09 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

class Contact
{

	private:
		const std::string first_name;
		const std::string last_name;
		const std::string nickname;
		const std::string darkest_secret;

	public:
		Contact(const std::string first, const std::string last, const std::string surnom, const std::string secret);
		~Contact(void);
};

#endif
