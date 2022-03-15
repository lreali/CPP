/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 04:09:52 by ereali            #+#    #+#             */
/*   Updated: 2022/03/15 02:49:03 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // acces : cin et cout

std::string	ft_string_toupper(std::string str)
{
	size_t i;

	i = 0;
	while (str.length() > i)
	{

		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl ;
		return (0);
	}
	while (argv[i])
	{
		std::cout << ft_string_toupper(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
