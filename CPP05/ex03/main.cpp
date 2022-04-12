/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 04:59:38 by ereali            #+#    #+#             */
/*   Updated: 2022/04/12 23:49:09 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
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
		Intern i;

		Form * plop = i.makeForm("presidential pardon", "The entire World");
		Form * ploop = i.makeForm("presi pardon", "The entire World");

		(void)ploop;
		David.signForm(*plop);
		David.signForm(a);
		David.signForm(yeay);
		David.signForm(b);

		David.executeForm(*plop);
		delete plop;
}
