/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 14:54:06 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/03 23:51:14 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec):
	name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
	if (gradeToSign < 1  || gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
	signedF = false;
	signBur = "";
}

Form::~Form()
{
}

Form::Form(Form const &copy):
	name(copy.name), gradeToSign(copy.gradeToSign), gradeToExec(copy.gradeToExec)
{
	if (gradeToSign < 1  || gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
	signedF = false;
	signBur = "";
}

Form &Form::operator=(Form const &ref)
{
	signedF = ref.signedF;
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High Exception!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low Exception!");
}

const char *Form::UnsignedException::what() const throw()
{
	return ("Unsigned Exception!");
}

void Form::beSigned(Bureaucrat bur)
{
	if (bur.getGrade() <= gradeToSign)
	{
		signedF = true;
		signBur = bur.getName();
	}
	else
		throw Form::GradeTooLowException();
}

std::string Form::getName() const
{
	return (name);
}

bool Form::getSignedF()
{
	return (signedF);
}

int Form::getGradeToSign()
{
	return (gradeToSign);
}

int Form::getGradeToExec()
{
	return (gradeToExec);
}

std::string Form::getSignBur()
{
	return (signBur);
}

void Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > gradeToExec)
		throw Form::GradeTooLowException();
	else if (!signedF)
		throw Form::UnsignedException();
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
	out << "Form : " << form.getName();
	if (form.getSignedF() == true)
		out << "(signed by " << form.getSignBur() << ")";
	else
		out << "(not signed)";
	out << ", gradeToSign : " << form.getGradeToSign() << ", gradeToExec : " << form.getGradeToExec() << std::endl;
	return (out);
}
