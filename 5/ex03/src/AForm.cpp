/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 10:53:53 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/07 15:10:53 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

#include <iostream>

AForm::AForm(void)
:
	_name("default"),
	_signGrade(150),
	_executeGrade(150),
	_isSigned(false)
{
	std::cout << "Form created with an empty constructor" << std::endl;
}

AForm::AForm(std::string name, uint32_t signGrade, uint32_t executeGrade)
:
	_name(name),
	_signGrade(signGrade),
	_executeGrade(executeGrade),
	_isSigned(false)
{

	if (signGrade > 150 || executeGrade > 150)
	{
		throw AForm::GradeTooHighException();
	}
	else if (signGrade > 150 || executeGrade > 150)
	{
		throw AForm::GradeTooLowException();
	}
	
	std::cout << "Form created with the name and sign and execute grade constructor" << std::endl;}

AForm::~AForm(void)
{
	std::cout << "Form " << this->_name << " deconstructed" << std::endl;
}

AForm::AForm(const AForm &other)
: 
	_name(other._name),
	_signGrade(other._signGrade),
	_executeGrade(other._executeGrade),
	_isSigned(other._isSigned)
{
	*this = other;
	std::cout << "Form created by copy" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		this->_isSigned = other._isSigned;
	}

	std::cout << "AForm created by assertion" << std::endl;

	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

std::string AForm::getName() const
{
	return (this->_name);
}

uint32_t AForm::getSignGrade() const
{
	return (this->_signGrade);
}

uint32_t AForm::getExecuteGrade() const
{
	return (this->_executeGrade);
}

bool AForm::getSigned() const
{
	return (this->_isSigned);
}

void AForm::setSigned(bool isSigned)
{
	this->_isSigned = isSigned;
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	uint32_t grade = bureaucrat.getGrade();

	if (grade > this->_signGrade)
	{
		throw AForm::GradeTooLowException();
	}
	
	this->_isSigned = true;

	std::cout << this->_name << " was just signed by the bureaucrat " << bureaucrat.getName() << " with a grade " << bureaucrat.getGrade() << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::FormNotSigned::what() const throw()
{
	return ("Form is not signed");
}

////////////////////////////////////////////////////////////////////////////////

std::ostream & operator<<(std::ostream &ostr, AForm &instance)
{
	std::string isSigned = instance.getSigned() ? "true" : "false";
	
	ostr << "Form " << instance.getName() << " having a grade to sign " << instance.getSignGrade() << " and a grade to execute " << instance.getExecuteGrade() << " with signed status " << isSigned << std::endl;

	return (ostr);
}