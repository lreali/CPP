/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 04:59:21 by ereali            #+#    #+#             */
/*   Updated: 2022/04/12 22:04:55 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include "Form.hpp"

# include <stdexcept>
# include <iostream>
# include <string>

class Form;

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("GradeTooHighException");
			}

		};
		class GradeTooLowException : public std::exception
		{
			 virtual const char* what() const throw()
			 {
				 return ("GradeTooLowException");
			 }
		};
		void UpGrade();
		void DownGrade();
		void signForm(Form &f);
		void executeForm(Form const & form);

		void setGrade(int grade);
		std::string	getName() const;
		int	getGrade() const;

		~Bureaucrat();

	private:
		std::string const _name;
		int _grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
