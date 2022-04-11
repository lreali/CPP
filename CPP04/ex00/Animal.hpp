/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:13:38 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 05:41:22 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(Animal const & src);
		Animal & operator=(Animal const & rhs);
		std::string getType(void) const;
		virtual void makeSound() const;
		virtual ~Animal();
	protected:
		std::string _type;
};
#endif
