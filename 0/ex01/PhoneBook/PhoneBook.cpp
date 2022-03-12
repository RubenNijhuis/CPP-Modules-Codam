/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 17:28:37 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/12 22:12:36 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook constructor called" << std::endl;
	this->amount = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destructor called" << std::endl;
	return;
}

void PhoneBook::addContact(void)
{
	bool	run;
	int	current_req;

	char *questionnares[] = {"Name","Last","Test","Test2"};
	std::string contact_info;
	run = true;
	current_req = 0;
	while (run)
	{
		std::cout << "> Input " << questionnares[current_req] << ":";
		std::getline(std::cin, contact_info[current_req]);
		current_req++;
	}
	return;
}

void PhoneBook::searchContact(void)
{
	return;
}