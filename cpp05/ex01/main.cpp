/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 23:45:14 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/28 19:38:39 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat burHigh("burHigh", 1);
	std::cout << burHigh;
	Bureaucrat burLow("burLow", 150);
	std::cout << burLow;
	try
	{
		burHigh.incrementGrade();
		std::cout << burHigh;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		burLow.decrementGrade();
		std::cout << burLow;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "------" << std::endl;
	try
	{
		Bureaucrat burZero("bur0", 0);
		std::cout << burZero;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bur150("bur150", 151);
		std::cout << bur150;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << "\n---------------" << std::endl;
	Form form("form1", 10, 10);
	std::cout << form;
	form.beSigned(burHigh);
	std::cout << form;
	burHigh.signForm(form);

	std::cout << "------" << std::endl;
	Form form2("form2", 10, 10);
	try
	{
		form2.beSigned(burLow);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}burHigh.signForm(form2);

	std::cout << "------" << std::endl;
	try
	{
		Form form3("form3", 0, 10);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
