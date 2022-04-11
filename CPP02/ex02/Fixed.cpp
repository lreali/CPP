/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 04:54:41 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 02:18:46 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _RawBits(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const raw)
{
	// std::cout << "Int constructor called" << std::endl;
	_RawBits = raw << _bits;
}

Fixed::Fixed(float const raw)
{
	// std::cout << "Float constructor called" << std::endl;
	_RawBits = (int)roundf(raw * (1 << _bits));
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_RawBits = raw << _bits;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
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
	// std::cout << "Copy assignement operator called" << std::endl;
	_RawBits = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs)
{
	return (_RawBits > rhs._RawBits);
}

bool	Fixed::operator<(Fixed const & rhs)
{
	return (_RawBits < rhs._RawBits);
}

bool	Fixed::operator<=(Fixed const & rhs)
{
	return (_RawBits <= rhs._RawBits);
}

bool	Fixed::operator>=(Fixed const & rhs)
{
	return (_RawBits >= rhs._RawBits);
}

bool	Fixed::operator==(Fixed const & rhs)
{
	return (_RawBits == rhs._RawBits);
}

bool	Fixed::operator!=(Fixed const & rhs)
{
	return (_RawBits != rhs._RawBits);
}

Fixed	Fixed::operator+(Fixed const & rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	if (rhs._RawBits != 0)
		return (Fixed(this->toFloat() / rhs.toFloat()));
	std::cout << "You tried to divide by 0 don't do it again !! GggrrRRRR..." << '\n';
	return(rhs);
}
Fixed	&Fixed::operator++(void)
{
	++(_RawBits);
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	--(_RawBits);
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++(*this);
	return(tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--(*this);
	return(tmp);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a: b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a: b);
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a._RawBits > b._RawBits ? a: b);
}

Fixed const & Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a._RawBits < b._RawBits ? a: b);
}

Fixed::~Fixed()
{
	// std::cout << "Default destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
