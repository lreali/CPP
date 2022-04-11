/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:10:01 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 23:09:29 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <string>

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const & src);

		Dog & operator=(Dog const & rhs);
		void PrintIdeas(void) const;
		void makeSound() const;

		~Dog();

	private:
		Brain *_ideas;
};
#endif
