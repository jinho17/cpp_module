/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 23:45:00 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/03 23:51:55 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):
	name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy):
	name(copy.name), grade(copy.grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &ref)
{
	grade = ref.grade;
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high exception!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low exception!";
}

std::string Bureaucrat::getName()
{
	return (name);
}
int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::incrementGrade()
{
	if (grade > 1)
		grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	if (grade < 150)
		grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSignedF() == true && form.getSignBur() == name)
		std::cout << name << " signs " << form.getName() << std::endl;
	else
		std::cout << name << " cannot sign " << form.getName() << " because " << name << "'s grade is too low!" << std::endl;
}

void Bureaucrat::executeForm(Form const &form)
{
	try{
		form.execute(*this);
		std::cout << name << " executes " << form.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Unable to execute! Because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << "." << std::endl;
	return (out);
}
