/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:08:36 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 23:12:54 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << " Animal Default constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_type = rhs._type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return(_type);
}

void Animal::makeSound() const
{
	std::cout << "*Animal classic sound*" << std::endl;
}

void Animal::PrintIdeas() const
{}

Animal::~Animal()
{
	std::cout << "Animal Default destructor called" << std::endl;
}
