/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 04:59:38 by ereali            #+#    #+#             */
/*   Updated: 2022/04/12 05:07:26 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat David( "David", 1);
		std::cout << David << std::endl;
		David.UpGrade();
		std::cout << David << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr <<  e.what() << std::endl << std::endl;
	}

	try
	{
		Bureaucrat Pedro( "Pedro", 50);
		std::cout << Pedro << std::endl;
		Pedro.DownGrade();
		std::cout << Pedro << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr <<  e.what() << std::endl << std::endl;
	}

	try
	{
		Bureaucrat Mariane( "Mariane", 180);
		std::cout << Mariane << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr <<  e.what() << std::endl << std::endl;
	}

	try
	{
		Bureaucrat Giles( "Mr. le directeur", 0);
		std::cout << Giles << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr <<  e.what() << std::endl << std::endl;
	}


}
