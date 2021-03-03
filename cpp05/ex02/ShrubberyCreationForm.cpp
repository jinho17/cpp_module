/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 23:01:51 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/03 19:29:11 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy):
	Form(copy), target(copy.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	Form::operator=(ref);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream write_file;
	write_file.open(target + "_shrubbery", std::ios::out | std::ios::app);
	if (write_file.is_open())
	{
		write_file << "		@		" << std::endl;
		write_file << "	   @@@  	" << std::endl;
		write_file << "	  @@@@@ 	" << std::endl;
		write_file << "	 @@@@@@@	" << std::endl;
		write_file << "	   ||   	" << std::endl;
		write_file << "	   ||   	" << std::endl;
		write_file.close();
	}
}
