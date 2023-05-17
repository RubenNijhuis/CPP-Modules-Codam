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
	_executeGrade(150),
	_isSigned(false)
{
	std::cout << "Form created with the name and signGrade and executeGrade construcor" << std::endl;
}


Form::~Form(void)
{
	std::cout << "Form " << this->_type << " deconstructed" << std::endl;
	return;
}

Form::Form(const Form &other)
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
	}

	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void beSigned(Bureaucrat &bureacrat)
{
	
}