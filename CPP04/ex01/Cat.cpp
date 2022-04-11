/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:09:02 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 23:16:05 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"


Cat::Cat()
{
	_type = "Cat";
	_ideas = new Brain();
	_ideas->setIdeas("Cat ideas");

	std::cout << " Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	_type = src._type;
	_ideas = new Brain(*src._ideas);
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{

	std::cout << "Copy assignement operator called" << std::endl;
	_type = rhs._type;
	*_ideas = *(rhs._ideas);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou 🐱" << std::endl;
}

void Cat::PrintIdeas(void) const
{
		std::cout <<  "idea one : " << _ideas->getIdeas(0) << " idea two : " << _ideas->getIdeas(1) << std::endl;
}

Cat::~Cat()
{
	std::cout << _ideas << std::endl;
	delete _ideas;
	std::cout << "Cat Default destructor called" << std::endl;
}
