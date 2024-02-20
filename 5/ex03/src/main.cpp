/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2024/02/07 15:41:05 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Intern someIntern;

	AForm *form1 = someIntern.makeForm("robotomy request", "Bender");
	AForm *form2 = someIntern.makeForm("shrubbery creation", "Treehouse");

	try {
		AForm *form3 = someIntern.makeForm("loplop", "No existo");
		delete form3;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	delete form1;
	delete form2;
}
