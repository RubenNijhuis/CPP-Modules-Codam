/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 10:53:53 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/05/17 11:12:54 by rubennijhui   ########   odam.nl         */
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
	std::cout << "Form created with an empty construcor" << std::endl;

	return;
}

Form::Form(std::string name)
:
	_name(name),
	_signGrade(150),
	_executeGrade(150),
	_isSigned(false)
{
	std::cout << "Form created with the name construcor" << std::endl;

	return;
}

Form::Form(std::string name, uint32_t signGrade)
:
	_name(name),
	_signGrade(signGrade),
	_executeGrade(150),
	_isSigned(false)
{
	std::cout << "Form created with the name and signGrade construcor" << std::endl;
}

Form::Form(std::string name, uint32_t signGrade, uint32_t executeGrade)
:
	_name(name),
	_signGrade(signGrade),
	_executeGrade(executeGrade),
	_isSigned(false)
{
	std::cout << "Form created with the name and signGrade and executeGrade construcor" << std::endl;
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

std::string Form::getName()
{
	return (this->_name);
}

uint32_t Form::getSignGrade()
{
	return (this->_signGrade);
}

uint32_t Form::getExecuteGrade()
{
	return (this->_executeGrade);
}

bool Form::getIsSigned()
{
	return (this->_isSigned);
}

void Form::beSigned(Bureaucrat &bureacrat)
{
	uint32_t grade = bureacrat.getGrade();

	if (grade > this->_signGrade)
	{
		throw Form::GradeTooLowException();
		return;
	}
	
	this->_isSigned = true;

	std::cout << *this << " was just signed by the bureaucrat " << bureacrat.getName() << " with a grade " << bureacrat.getGrade() << std::endl;
}

const char* Form::GradeTooLowException::except() const throw()
{
	return ("Grade too low");
}

std::ostream & operator<<(std::ostream &ostr, Form &instance)
{
	ostr << "Form " << instance.getName() << " having a grade to sign " << instance.getSignGrade() << " and a grade to execute "
		<< instance.getExecuteGrade() << " with signed equal to " << instance.getIsSigned();
	return (ostr);
}