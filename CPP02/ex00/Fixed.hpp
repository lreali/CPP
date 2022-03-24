/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 04:54:38 by ereali            #+#    #+#             */
/*   Updated: 2022/03/23 06:01:58 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const & src);
	void setRawBits(int const raw);
	int	getRawBits(void) const;
	Fixed & operator=(Fixed const & rhs);
	~Fixed();
private:
	int _RawBits;
	int static const _bits = 8;
};
