/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2024/02/07 15:16:48 by rubennijhui   ########   odam.nl         */
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
	{
		std::cout << "\033[34mConstructing Shrubbery Form\033[0m" << std::endl;
		AForm *form = new ShrubberyCreationForm("ForumVoorBureaucratie");
		std::cout << std::endl;

		std::cout << "\033[34mConstructing bureaucrat \033[0m" << std::endl;
		Bureaucrat *bureaucrat = new Bureaucrat("Akkefietje 1", 110);
		std::cout << std::endl;

		std::cout << "\033[34mSigning form\033[0m" << std::endl;
		bureaucrat->signForm(*form);
		std::cout << std::endl;

		std::cout << "\033[34mExecuting form\033[0m" << std::endl;
		bureaucrat->executeForm(*form);
		std::cout << std::endl;
	}

	std::cout << "---------------" << std::endl;

	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing Shrubbery Form\033[0m" << std::endl;
		AForm *form = new ShrubberyCreationForm("ForumVoorBureaucratie");
		std::cout << std::endl;

		std::cout << "\033[34mConstructing bureaucrat with too low sign grade\033[0m" << std::endl;
		Bureaucrat *bureaucrat = new Bureaucrat("Akkefietje 1", 150);
		std::cout << std::endl;

		std::cout << "\033[34mCan't sign form\033[0m" << std::endl;
		bureaucrat->signForm(*form);
		std::cout << std::endl;
		
		std::cout << "\033[34mTrying to execute it\033[0m" << std::endl;
		bureaucrat->executeForm(*form);
		std::cout << std::endl;
	}

	std::cout << "---------------" << std::endl;

	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing RobotomyRequest Form\033[0m" << std::endl;	
		AForm *form = new RobotomyRequestForm("Robot Boi");
		std::cout << std::endl;

		std::cout << "\033[34mConstructing bureaucrat with high enough sign grade\033[0m" << std::endl;
		Bureaucrat *bureaucrat = new Bureaucrat("Doctor", 30);
		std::cout << std::endl;

		std::cout << "\033[34mSigning form\033[0m" << std::endl;
		bureaucrat->signForm(*form);
		std::cout << std::endl;
		
		std::cout << "\033[34mExecuting form\033[0m" << std::endl;
		bureaucrat->executeForm(*form);
		std::cout << std::endl;
	}

	std::cout << "---------------" << std::endl;

	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing PresidentialPardon Form\033[0m" << std::endl;
		AForm *form = new PresidentialPardonForm("President");
		std::cout << std::endl;

		std::cout << "\033[34mConstructing bureaucrat with high enough sign grade\033[0m" << std::endl;
		Bureaucrat *bureaucrat = new Bureaucrat("Akkefietje 1", 2);
		std::cout << std::endl;

		std::cout << "\033[34mSigning form\033[0m" << std::endl;
		bureaucrat->signForm(*form);
		std::cout << std::endl;
		
		std::cout << "\033[34mExecuting form\033[0m" << std::endl;
		bureaucrat->executeForm(*form);
		std::cout << std::endl;
	}
}
