/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 04:59:38 by ereali            #+#    #+#             */
/*   Updated: 2022/04/12 16:49:36 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

		Bureaucrat David( "David", 1);
		std::cout << David << std::endl;

		Bureaucrat Pedro( "Pedro", 50);
		std::cout << Pedro << std::endl;
		Pedro.DownGrade();
		std::cout << Pedro << std::endl;

		try
		{
			Form A("Some stupid form", 15, 0);
		}
		catch (std::exception &e)
		{
			std::cerr <<  e.what() << std::endl << std::endl;
		}

		try
		{
			Form A("Some stupid form2", 15, 0);
		}
		catch (std::exception &e)
		{
			std::cerr <<  e.what() << std::endl << std::endl;
		}

		try
		{
			Form b("Some more usefull form", 15, 98);
			std::cout << b << std::endl;
			std::cout << Pedro << std::endl;
			Pedro.signForm(b);
			std::cout << b << std::endl;

		}
		catch (std::exception &e)
		{
			std::cerr <<  e.what() << std::endl << std::endl;
		}

		try
		{
			Form b("Some more usefull form already sign", 15, 98);
			std::cout << b << std::endl;
			std::cout << Pedro << std::endl;
			Pedro.signForm(b);
			std::cout << b << std::endl;
			Pedro.signForm(b);
		}
		catch (std::exception &e)
		{
			std::cerr <<  e.what() << std::endl << std::endl;
		}

		try
		{
			Form C("Some too usefull form", 15, 40);
			std::cout << Pedro << std::endl;
			std::cout << C << std::endl;

			Pedro.signForm(C);
			std::cout << C << std::endl;

		}
		catch (std::exception &e)
		{
			std::cerr <<  e.what() << std::endl << std::endl;
		}
}
