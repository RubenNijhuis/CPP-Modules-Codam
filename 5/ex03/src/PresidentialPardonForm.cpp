/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 14:40:23 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/07 15:06:37 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(void) 
: 
    AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "Default PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name)
:
    AForm(name, 25, 5)
{
	std::cout << "PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm deconstructed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
: 
    AForm(
        other.getName(),
        other.getSignGrade(),
        other.getExecuteGrade()
    )
{	
	*this = other;
	std::cout << "PresidentialPardonForm created by copy" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << "PresidentialPardonForm created by assignment" << std::endl;

	if (this != &other)
    {
        this->setSigned(other.getSigned());
    }

	return(*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigned()) {
		throw AForm::FormNotSigned();
	}

	if (executor.getGrade() > this->getExecuteGrade()) {
		throw AForm::GradeTooLowException();
	}

	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}