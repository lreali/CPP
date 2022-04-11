/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 04:54:38 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 02:04:37 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath> //voir roundf

class Fixed
{
public:
	Fixed();
	Fixed(int const raw);
	Fixed(float const raw);
	Fixed(Fixed const & src);
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed	&operator=(Fixed const & rhs);
	bool	operator>(Fixed const & rhs);
	bool	operator<(Fixed const & rhs);
	bool	operator<=(Fixed const & rhs);
	bool	operator>=(Fixed const & rhs);
	bool	operator==(Fixed const & rhs);
	bool	operator!=(Fixed const & rhs);
	Fixed	operator+(Fixed const & rhs);
	Fixed	operator-(Fixed const & rhs);
	Fixed	operator*(Fixed const & rhs);
	Fixed	operator/(Fixed const & rhs);
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);
	static Fixed const & min(Fixed const &a, Fixed const &b);
	static Fixed const & max(Fixed const &a, Fixed const &b);
	static Fixed & min(Fixed &a, Fixed &b);
	static Fixed & max(Fixed &a, Fixed &b);

	~Fixed();
private:
	int	_RawBits;
	int	static const _bits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
