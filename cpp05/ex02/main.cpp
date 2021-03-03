/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 23:45:14 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/03 23:55:57 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat burHigh("burHigh", 1);
	std::cout << burHigh;
	Bureaucrat burLow("burLow", 150);
	std::cout << burLow;

	std::cout << "-------------" << std::endl;
	ShrubberyCreationForm shrubbery("Home");
	try{shrubbery.execute(burHigh);}
	catch(std::exception &e){std::cerr << e.what() << std::endl;}
	shrubbery.beSigned(burHigh);
	shrubbery.execute(burHigh);
	std::cout << shrubbery;
	std::cout << "Home_shrubbery file be created!" << std::endl;

	std::cout << "-------------" << std::endl;
	RobotomyRequestForm roboto("roboto");
	try{roboto.execute(burLow);}
	catch(std::exception &e){std::cerr << e.what() << std::endl;}
	roboto.beSigned(burHigh);
	roboto.execute(burHigh);
	std::cout << roboto;

	std::cout << "-------------" << std::endl;
	PresidentialPardonForm presi("presi");
	burHigh.executeForm(presi);
	burLow.executeForm(presi);
	presi.beSigned(burHigh);
	burHigh.executeForm(presi);
	std::cout << presi;
}
