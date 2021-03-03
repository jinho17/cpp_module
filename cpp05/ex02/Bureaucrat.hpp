/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 23:45:06 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/03 23:39:17 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
private:
	Bureaucrat();
	std::string const name;
	int grade;

public:
	Bureaucrat(std::string name, int grade);
	virtual ~Bureaucrat();
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat &operator=(Bureaucrat const &ref);

	class GradeTooHighException: public std::exception {
		virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char *what() const throw();
	};

	std::string getName();
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();

	void signForm(Form &form);
	void executeForm(Form const &form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &bur);

#endif
