/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:09:02 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 06:55:16 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"


Dog::Dog()
{
	_type = "Dog";
	_ideas = new Brain();

	_ideas->setIdeas("Cat ideas");

	std::cout << " Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_type = rhs._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Waf waf 🐕" << std::endl;
}

Dog::~Dog()
{
	delete _ideas;
	std::cout << "Dog Default destructor called" << std::endl;
}
