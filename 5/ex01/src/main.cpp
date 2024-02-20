/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2024/02/07 15:00:40 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		std::cout << "\033[34mConstructing Form\033[0m" << std::endl;
		Form *form = new Form("ForumVoorBureaucratie", 120, 100);
		std::cout << std::endl;

		std::cout << "\033[34mConstructing Bureaucrat\033[0m" << std::endl;
		Bureaucrat *bureaucrat = new Bureaucrat("Akkefietje 1", 110);
		std::cout << std::endl;

		std::cout << "\033[34mSigning form\033[0m" << std::endl;
		bureaucrat->signForm(*form);
		std::cout << std::endl;
	}

	std::cout << "---------------" << std::endl;

	{
		std::cout << std::endl;
		
		try {
			std::cout << "\033[34mConstructing Form with too high grade\033[0m" << std::endl;
			Form *form = new Form("ForumVoorBureaucratie", 120, 160);

			std::cout << "\033[34mConstructing Bureaucrat\033[0m" << std::endl;
			Bureaucrat *bureaucrat = new Bureaucrat("Akkefietje 1", 130);
			std::cout << std::endl;
	
			std::cout << "\033[34mSigning form\033[0m" << std::endl;
			bureaucrat->signForm(*form);
			std::cout << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
	}

	std::cout << "---------------" << std::endl;

	{
		std::cout << std::endl;
		std::cout << "\033[34mConstructing Form\033[0m" << std::endl;
		Form *form = new Form("ForumVoorBureaucratie", 120, 100);
		std::cout << std::endl;

		std::cout << "\033[34mConstructing Bureaucrat\033[0m" << std::endl;
		Bureaucrat *bureaucrat = new Bureaucrat("Akkefietje 1", 100);
		std::cout << std::endl;

		std::cout << "\033[34mSigning form\033[0m" << std::endl;
		bureaucrat->signForm(*form);
		std::cout << std::endl;
	}
}
