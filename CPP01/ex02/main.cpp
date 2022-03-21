/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 03:10:39 by ereali            #+#    #+#             */
/*   Updated: 2022/03/21 03:26:07 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "------ADDRESS------" << std::endl;
	std::cout << "string :" << &string << std::endl;
	std::cout << "stringPTR :" << stringPTR << std::endl;
	std::cout << "stringREF :" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "------VALEUR------" << std::endl;
	std::cout << "string :" << string << std::endl;
	std::cout << "stringPTR :" << *stringPTR << std::endl;
	std::cout << "stringREF :" << stringREF << std::endl;
	return (0);
}
