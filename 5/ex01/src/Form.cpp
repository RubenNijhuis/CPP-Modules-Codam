/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 10:53:53 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/07 15:11:16 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <iostream>

Form::Form(void)
:
	_name("default"),
	_signGrade(150),
	_executeGrade(150),
	_isSigned(false)
{
	std::cout << "Form created with an empty constructor" << std::endl;

	return;
}

Form::Form(std::string name, const uint32_t signGrade, const uint32_t executeGrade)
:
	_name(name),
	_signGrade(signGrade),
	_executeGrade(executeGrade),
	_isSigned(false)
{
	if (signGrade > 150 || executeGrade > 150)
	{
		throw Form::GradeTooHighException();
	}
	else if (signGrade > 150 || executeGrade > 150)
	{
		throw Form::GradeTooLowException();
	}

	std::cout << "Form created with the name and sign and execute grade constructor" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form " << this->_name << " deconstructed" << std::endl;
	return;
}

Form::Form(const Form &other)
: 
	_name(other._name),
	_signGrade(other._signGrade),
	_executeGrade(other._executeGrade),
	_isSigned(other._isSigned)
{
	std::cout << "Form created by copy" << std::endl;
	*this = other;
	return;
}

Form &Form::operator=(const Form &other)
{
	std::cout << "Form created by assertion" << std::endl;

	if (this != &other)
	{
		this->_isSigned = other._isSigned;
	}

	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

std::string Form::getName() const
{
	return (this->_name);
}

uint32_t Form::getSignGrade() const
{
	return (this->_signGrade);
}

uint32_t Form::getExecuteGrade() const
{
	return (this->_executeGrade);
}

bool Form::getIsSigned() const
{
	return (this->_isSigned);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	uint32_t grade = bureaucrat.getGrade();

	if (grade > this->_signGrade)
	{
		throw Form::GradeTooLowException();
	}
	
	this->_isSigned = true;

	std::cout << this->_name << " was just signed by the bureaucrat " << bureaucrat.getName() << " with a grade " << bureaucrat.getGrade() << std::endl;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

std::ostream & operator<<(std::ostream &ostr, Form &instance)
{
	std::string isSigned = instance.getIsSigned() ? "true" : "false";
	
	ostr << "Form " << instance.getName() << " having a grade to sign " << instance.getSignGrade() << " and a grade to execute " << instance.getExecuteGrade() << " with signed status " << isSigned << std::endl;

	return (ostr);
}