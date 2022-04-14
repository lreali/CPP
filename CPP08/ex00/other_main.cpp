/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main 2.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:41:14 by anclarma          #+#    #+#             */
/*   Updated: 2022/04/14 09:39:44 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <map>
#include "easyfind.hpp"

int	main(void)
{
	std::cout << "-vector<int>-----------------------------------" << std::endl;
	{
		std::vector<int>	array;

		array.push_back(21);
		array.push_back(42);
		try
		{
			std::cout
				<< "size: " << array.size() << std::endl
				<< "array[0]: "<< array[0] << std::endl
				<< "array[1]: " << array[1] << std::endl
				<< "easyfind 21: " << *easyfind(array, 21) << std::endl
				<< "easyfind 42: " << *easyfind(array, 42) << std::endl
				<< "easyfind 0: " << *easyfind(array, 0) << std::endl
				<< "easyfind 404: " << *easyfind(array, 404) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-deque<int>------------------------------------" << std::endl;
	{
		std::deque<int>	array;

		array.push_back(21);
		array.push_back(42);
		try
		{
			std::cout
				<< "size: " << array.size() << std::endl
				<< "array[0]: "<< array[0] << std::endl
				<< "array[1]: " << array[1] << std::endl
				<< "easyfind 21: " << *easyfind(array, 21) << std::endl
				<< "easyfind 42: " << *easyfind(array, 42) << std::endl
				<< "easyfind 0: " << *easyfind(array, 0) << std::endl
				<< "easyfind 404: " << *easyfind(array, 404) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-list<int>-------------------------------------" << std::endl;
	{
		std::list<int>	array;

		array.push_back(21);
		array.push_back(42);
		try
		{
			std::cout
				<< "size: " << array.size() << std::endl
				<< "easyfind 21: " << *easyfind(array, 21) << std::endl
				<< "easyfind 42: " << *easyfind(array, 42) << std::endl
				<< "easyfind 0: " << *easyfind(array, 0) << std::endl
				<< "easyfind 404: " << *easyfind(array, 404) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-const list<int>-------------------------------" << std::endl;
	{
		int						tab[2] = {21, 42};
		const std::list<int>	array(tab, tab + 2);

		try
		{
			std::cout
				<< "size: " << array.size() << std::endl
				<< "easyfind 21: " << *easyfind(array, 21) << std::endl
				<< "easyfind 42: " << *easyfind(array, 42) << std::endl
				<< "easyfind 0: " << *easyfind(array, 0) << std::endl
				<< "easyfind 404: " << *easyfind(array, 404) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
