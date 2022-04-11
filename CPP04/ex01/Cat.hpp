/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:10:01 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 23:09:17 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP
#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <string>

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const & src);

		Cat & operator=(Cat const & rhs);
		void PrintIdeas(void) const;
		void makeSound() const;

		~Cat();

	private:
		Brain *_ideas;
};
#endif
