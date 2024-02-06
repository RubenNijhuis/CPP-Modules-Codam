/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 14:40:23 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/06 17:07:43 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) 
: 
    AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Default ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
:
    AForm(name, 145, 137)
{
	std::cout << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm deconstructed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
: 
    AForm(
        other.getName(),
        other.getSignGrade(),
        other.getExecuteGrade()
    )
{	
	*this = other;
	std::cout << "ShrubberyCreationForm created by copy" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "ShrubberyCreationForm created by assignment" << std::endl;

	if (this != &other)
    {
        this->setSigned(other.getIsSigned());
    }

	return(*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned()) {
		throw AForm::FormNotSigned();
	}

	if (executor.getGrade() > this->getExecuteGrade()) {
		throw AForm::GradeTooLowException();
	}

	std::ofstream shubberyFile;

	shubberyFile.open(this->getName() + "_shrubbery");

	shubberyFile <<
			"  oxoxoo    ooxoo\n" \
			" ooxoxo oo  oxoxooo\n" \
			"oooo xxoxoo ooo ooox\n" \
			"oxo o oxoxo  xoxxoxo\n" \
			" oxo xooxoooo o ooo\n" \
			"  ooo\\oo\\  /o/o\n" \
			"	  \\  \\/ /\n" \
			"	   |   /\n" \
			"	   |  |\n" \
			"	   |  |\n" \
			"	   |  |\n" \
			"	   |  |\n" \
			"__\\/__/____\\__\\/___";

    shubberyFile.close();
}