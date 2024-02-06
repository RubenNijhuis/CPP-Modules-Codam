/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 14:40:23 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/06 17:32:06 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <iostream>
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(void) 
: 
    AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "Default RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name)
:
    AForm(name, 72, 45)
{
	std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm deconstructed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
: 
    AForm(
        other.getName(),
        other.getSignGrade(),
        other.getExecuteGrade()
    )
{	
	*this = other;
	std::cout << "RobotomyRequestForm created by copy" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << "RobotomyRequestForm created by assignment" << std::endl;

	if (this != &other)
    {
        this->setSigned(other.getIsSigned());
    }

	return(*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned()) {
		throw AForm::FormNotSigned();
	}

	if (executor.getGrade() > this->getExecuteGrade()) {
		throw AForm::GradeTooLowException();
	}

	std::cout << "*BRRRRrrrr Brr*" << std::endl;

	srand(time(0));
	int num = (rand() % 2);
	if (num == 1)
	{
		std::cout << this->getName() << " has been robotomized successfully " << std::endl;
	}
	else
	{
		std::cout << "the robotomy has failed" << std::endl;
	}
}