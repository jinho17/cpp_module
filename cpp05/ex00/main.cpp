/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 23:45:14 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/28 01:12:40 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
}
