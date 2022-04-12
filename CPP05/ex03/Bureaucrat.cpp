/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 04:59:30 by ereali            #+#    #+#             */
/*   Updated: 2022/04/12 23:17:46 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
	_grade = 150;
	std::cout << "Bureaucrat Default constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
		std::cout << "Bureaucrat constructor called" << std::endl;
		_grade = 150;
		if (grade < 1)
			throw Bureaucrat::GradeTooLowException();
		if (grade > 150)
			throw Bureaucrat::GradeTooHighException();
		_grade = grade;

}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src._name)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	_grade = src._grade;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Default destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	_grade = rhs._grade;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return (o);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Bureaucrat::UpGrade()
{
	std::cout << "Bureaucrat UpGrade member function called" << std::endl;
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}


void Bureaucrat::DownGrade()
{
	std::cout << "Bureaucrat DownGrade member function called" << std::endl;

	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(Form &f)
{
	if (f.getSign() == 1)
	{
			std::cout << _name << " couldn't signed " << f.getName() << " because this form is already sign." << std::endl;
			return;
	}
	if (f.getSignRight() >= _grade)
		std::cout << _name << " signed " << f.getName() << std::endl;
	else
		std::cout << _name << " couldn't signed " << f.getName() << " because grade too low."<< std::endl;

	f.beSigned(*this);

}

void Bureaucrat::executeForm(Form const & form)
{
	if (form.getSign() == false)
		std::cout << _name << " couldn't execute " << form.getName() << " because it's not signed."<< std::endl;
	else if (form.getExecRight() >= _grade)
		std::cout << _name << " executed " << form.getName() << std::endl;
	else
		std::cout << _name << " couldn't execute " << form.getName() << " because grade too low."<< std::endl;
	form.execute(*this);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Bureaucrat::getName() const
{
	return (_name);

}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}
/* ************************************************************************** */
