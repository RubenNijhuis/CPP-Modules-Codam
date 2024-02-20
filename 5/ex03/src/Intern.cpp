/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 18:15:31 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/07 15:42:36 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Intern.hpp"

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    std::cout << "Intern default Constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

Intern::Intern(const Intern &other)
{
    *this = other;
}

AForm   *Intern::Shrubbery(const std::string &Target)
{
    return (new ShrubberyCreationForm(Target));
}

AForm   *Intern::Robotomy(const std::string &Target)
{
    return (new RobotomyRequestForm(Target));
}

AForm   *Intern::Presidential(const std::string &Target)
{
    return (new PresidentialPardonForm(Target));
}

AForm   *Intern::makeForm(const std::string &formName, const std::string &target)
{
    std::string forms[3] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };
    
    AForm *(Intern::*creation[3])(const std::string&) = {
        &Intern::Shrubbery, 
        &Intern::Robotomy,
        &Intern::Presidential
    };

    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == formName)
        {
            std::cout << "Intern created a " << forms[i] << std::endl; 
            return ((this->*creation[i])(target));
        }
    }

    throw UnknowFormPassedException();
}

const char *Intern::UnknowFormPassedException::what() const throw()
{
    return ("Unknown form name passed as parameter");   
}
