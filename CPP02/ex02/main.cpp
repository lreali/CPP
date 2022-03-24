/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 04:54:52 by ereali            #+#    #+#             */
/*   Updated: 2022/03/24 08:04:48 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	if (a < b)
		std::cout << b << std::endl;
	else if (a > b)
		std::cout << a << std::endl;

	std::cout << "a " << a << std::endl;
	std::cout << "b " << b << std::endl;

	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
