/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 00:49:36 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/04 01:55:25 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	Form *sample[3];
	std::string formName[3];

public:
	Intern();
	virtual ~Intern();
	Intern(Intern const &copy);
	Intern &operator=(Intern const &ref);

	class InvalidFormNameException: public std::exception {
		virtual const char *what() const throw();
	};

	Form *makeForm(std::string formName, std::string targetName);
};

#endif
