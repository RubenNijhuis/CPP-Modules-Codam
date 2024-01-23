/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/05/17 10:39:12 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		Form *form = new Form("ForumVoorBureaucratie", 120, 100);

		std::cout << std::endl;

		Bureaucrat *bureacrat = new Bureaucrat("Akkefietje 1", 110);

		std::cout << std::endl;

		bureacrat->signForm(*form);

		std::cout << std::endl;
	}

	std::cout << "---------------" << std::endl;

	{
		std::cout << std::endl;

		Form *form = new Form("ForumVoorBureaucratie", 120, 100);
	
		std::cout << std::endl;

		Bureaucrat *bureacrat = new Bureaucrat("Akkefietje 1", 130);

		std::cout << std::endl;

		bureacrat->signForm(*form);
	}
}
