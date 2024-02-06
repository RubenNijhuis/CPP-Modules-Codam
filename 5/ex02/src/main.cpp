/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2024/02/06 17:34:59 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	// Test 1 - ALL OK
	{
		AForm *form = new ShrubberyCreationForm("ForumVoorBureaucratie");

		std::cout << std::endl;

		Bureaucrat *bureaucrat = new Bureaucrat("Akkefietje 1", 110);

		std::cout << std::endl;

		bureaucrat->signForm(*form);
		
		std::cout << std::endl;
		
		bureaucrat->executeForm(*form);

		std::cout << std::endl;
	}

	std::cout << "---------------" << std::endl;

	// Test 2 - Can't sign because grade too low
	{
		std::cout << std::endl;

		AForm *form = new ShrubberyCreationForm("ForumVoorBureaucratie");
	
		std::cout << std::endl;

		Bureaucrat *bureaucrat = new Bureaucrat("Akkefietje 1", 150);

		std::cout << std::endl;

		bureaucrat->signForm(*form);
		
		std::cout << std::endl;
		
		bureaucrat->executeForm(*form);

		std::cout << std::endl;
	}

	std::cout << "---------------" << std::endl;


	// Test 3 - Can't execute because not signed
	{
		std::cout << std::endl;

		AForm *form = new ShrubberyCreationForm("ForumVoorBureaucratie");
	
		std::cout << std::endl;

		Bureaucrat *bureaucrat = new Bureaucrat("Akkefietje 1", 140);

		std::cout << std::endl;

		bureaucrat->signForm(*form);
		
		std::cout << std::endl;
		
		bureaucrat->executeForm(*form);

		std::cout << std::endl;
	}

	std::cout << "---------------" << std::endl;

	// Test 4 - ALL OK
	{
		std::cout << std::endl;

		AForm *form = new RobotomyRequestForm("Leeghoofd");
	
		std::cout << std::endl;

		Bureaucrat *bureaucrat = new Bureaucrat("Akkefietje 1", 150);

		std::cout << std::endl;

		bureaucrat->signForm(*form);

		std::cout << std::endl;
		
		bureaucrat->executeForm(*form);

		std::cout << std::endl;
	}

	std::cout << "---------------" << std::endl;

	// Test 5 - ALL OK
	{
		std::cout << std::endl;

		AForm *form = new PresidentialPardonForm("President");
	
		std::cout << std::endl;

		Bureaucrat *bureaucrat = new Bureaucrat("Akkefietje 1", 2);

		std::cout << std::endl;

		bureaucrat->signForm(*form);

		std::cout << std::endl;
		
		bureaucrat->executeForm(*form);

		std::cout << std::endl;
	}
}
