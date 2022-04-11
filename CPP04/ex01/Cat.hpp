/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:13:03 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 06:54:19 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
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
		void makeSound() const;
		~Cat();
	private:
		Brain *_ideas;
};
#endif
