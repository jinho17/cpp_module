/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:03:52 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/03 19:56:51 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy):
	Form(copy), target(copy.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	Form::operator=(ref);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 1);

	Form::execute(executor);
	int rand = dis(gen);
	std::cout << "Brrrrrrr..." << std::endl;
	if (rand == 1)
		std::cout << target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << target << " robotomization is a failure" << std::endl;
}
