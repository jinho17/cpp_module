/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 14:54:16 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/01 00:31:57 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
class Form;
# include "Bureaucrat.hpp"

class Form
{
private:
	Form();
	std::string const name;
	bool signedF;
	int const gradeToSign;
	int const gradeToExec;
	std::string signBur;

public:
	Form(std::string name, int gradeToSign, int gradeToExec);
	virtual ~Form();
	Form(Form const &copy);
	Form &operator=(Form const &ref);

	class GradeTooHighException: public std::exception {
		virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char *what() const throw();
	};

	void beSigned(Bureaucrat bur);

	std::string getName();
	bool getSignedF();
	int getGradeToSign();
	int getGradeToExec();
	std::string getSignBur();
};

std::ostream &operator<<(std::ostream &out, Form &form);

#endif
