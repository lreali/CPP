/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 04:54:38 by ereali            #+#    #+#             */
/*   Updated: 2022/03/23 06:16:31 by ereali           ###   ########.fr       */
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
	void setRawBits(int const raw);
	int	getRawBits(void) const;
	float toFloat(void) const;
	int toInt(void) const;
	Fixed & operator=(Fixed const & rhs);
	~Fixed();
private:
	int _RawBits;
	int static const _bits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
