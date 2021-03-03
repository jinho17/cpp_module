/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 00:45:01 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/04 01:59:33 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	sample[0] = new PresidentialPardonForm("target");
	sample[1] = new RobotomyRequestForm("target");
	sample[2] = new ShrubberyCreationForm("target");
	formName[0] = "PresidentialPardonForm";
	formName[1] = "RobotomyRequestForm";
	formName[2] = "ShrubberyCreationForm";
}

Intern::~Intern()
{
	delete sample[0];
	delete sample[1];
	delete sample[2];
}

Intern::Intern(Intern const &copy)
{
	(void)copy;
}

Intern &Intern::operator=(Intern const &ref)
{
	(void)ref;
	return (*this);
}

const char *Intern::InvalidFormNameException::what() const throw()
{
	return "Invalid form name";
}

Form *Intern::makeForm(std::string formName, std::string targetName)
{
	Form *form = nullptr;

	for(int i = 0; i < 3; i++)
	{
		if (this->formName[i] == formName)
			form = sample[i]->make(targetName);
	}
	if (form)
		std::cout << "Intern creates " << formName << std::endl;
	else
		throw Intern::InvalidFormNameException();
	return (form);
}
