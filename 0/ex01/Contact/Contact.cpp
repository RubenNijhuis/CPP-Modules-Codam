/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 17:28:37 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/13 12:42:30 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string.h>
#include "Contact.hpp"

std::string Contact::fields_name[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone",
	"Darkest Secret"
};

Contact::Contact(void)
{
	this->index = 0;
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::setInformation(void)
{
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << "# " << Contact::fields_name[i] << ":\n+ ";
		std::getline(std::cin, this->informations[i]);
	}
	return;
}

void Contact::displayData(void)
{
	std::cout << "|";
	for (int i = FirstName; i <= Phone; i++)
	{
		std::cout << std::setw(10);
		std::cout << this->informations[i] << "|";
	}
	std::cout << std::endl;
	return;
}
