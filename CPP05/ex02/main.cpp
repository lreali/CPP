/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 04:59:38 by ereali            #+#    #+#             */
/*   Updated: 2022/04/12 06:21:38 by ereali           ###   ########.fr       */
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

		Form A("Some stupid form", 15, 0);
}
