/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 04:09:52 by ereali            #+#    #+#             */
/*   Updated: 2022/03/12 04:43:38 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // acces : cin et cout

char *ft_string_toupper(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
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
		std::cout << ft_string_toupper(argv[i]) << std::endl ;
		i++;
	}
	return (0);
}
