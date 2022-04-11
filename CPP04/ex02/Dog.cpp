/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:09:02 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 23:17:44 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"


Dog::Dog()
{
	_type = "Dog";
	_ideas = new Brain();
	_ideas->setIdeas("Dog ideas");

	std::cout << " Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	_type = src._type;
	_ideas = new Brain(*src._ideas);
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{

	std::cout << "Copy assignement operator called" << std::endl;
	_type = rhs._type;
	*_ideas = *(rhs._ideas);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Waf waf 🐕" << std::endl;
}

void Dog::PrintIdeas(void) const
{
		std::cout <<  "idea one : " << _ideas->getIdeas(0) << " idea two : " << _ideas->getIdeas(1) << std::endl;
}

Dog::~Dog()
{
	std::cout << _ideas << std::endl;
	delete _ideas;
	std::cout << "Dog Default destructor called" << std::endl;
}
