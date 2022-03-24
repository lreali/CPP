/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 04:54:41 by ereali            #+#    #+#             */
/*   Updated: 2022/03/24 07:08:41 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _RawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const raw)
{
	std::cout << "Int constructor called" << std::endl;
	_RawBits = raw << _bits;
}

Fixed::Fixed(float const raw)
{
	std::cout << "Float constructor called" << std::endl;
	_RawBits = (int)roundf(raw * (1 << _bits));
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_RawBits = raw << _bits;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_RawBits);
}

float Fixed::toFloat(void) const
{
	return ((float)_RawBits / (1 << _bits));
}

int	Fixed::toInt(void) const
{
	return((int)roundf(_RawBits >> _bits));
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_RawBits = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
