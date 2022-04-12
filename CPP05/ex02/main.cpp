/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 04:59:38 by ereali            #+#    #+#             */
/*   Updated: 2022/04/12 23:16:57 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <time.h>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL));

		Bureaucrat David( "David", 1);
		std::cout << David << std::endl;

		Bureaucrat Pedro( "Pedro", 50);
		std::cout << Pedro << std::endl;
		Pedro.DownGrade();
		std::cout << Pedro << std::endl;

		PresidentialPardonForm a("Les Francais");
		RobotomyRequestForm yeay("robotomy form");
		ShrubberyCreationForm b("Shrubery");

		David.signForm(a);
		David.signForm(yeay);
		David.signForm(b);

		try
		{
			Pedro.executeForm(a);
		}
		catch (std::exception &e)
		{
			std::cerr <<  e.what() << std::endl << std::endl;
		}
		try
		{
			David.executeForm(a);
		}
		catch (std::exception &e)
		{
			std::cerr <<  e.what() << std::endl << std::endl;
		}
		try
		{
			Pedro.executeForm(yeay);
		}
		catch (std::exception &e)
		{
			std::cerr <<  e.what() << std::endl << std::endl;
		}
		try
		{
			David.executeForm(yeay);
		}
		catch (std::exception &e)
		{
			std::cerr <<  e.what() << std::endl << std::endl;
		}
		try
		{
			Pedro.executeForm(b);
		}
		catch (std::exception &e)
		{
			std::cerr <<  e.what() << std::endl << std::endl;
		}
}
