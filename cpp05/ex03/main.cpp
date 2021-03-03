/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 23:45:14 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/04 02:11:09 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat burHigh("burHigh", 1);
	std::cout << burHigh;
	Bureaucrat burLow("burLow", 150);
	std::cout << burLow;

	std::cout << "\n-------------" << std::endl;
	Intern intern;
	Form *presi;
	try{presi = intern.makeForm("error test", "tar");}
	catch(std::exception &e) {std::cout << e.what() << std::endl;}
	presi = intern.makeForm("PresidentialPardonForm", "tar");
	presi->beSigned(burHigh);
	presi->execute(burHigh);

	std::cout << "-------------" << std::endl;
	Form *roboto = intern.makeForm("RobotomyRequestForm", "get");
	roboto->beSigned(burHigh);
	roboto->execute(burHigh);

	std::cout << "-------------" << std::endl;
	Form *shrub = intern.makeForm("ShrubberyCreationForm", "targ");
	shrub->beSigned(burHigh);
	shrub->execute(burHigh);

	delete presi;
	delete roboto;
	delete shrub;
}
