/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 17:28:37 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/05/10 17:59:48 by rnijhuis      ########   odam.nl         */
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

bool	Contact::setInformation(void)
{
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << "# " << Contact::fields_name[i] << ":\n+ ";
		std::getline(std::cin, this->information[i]);
		if (this->information[i].length() == 0)
			return (false);
	}
	return (true);
}

void Contact::displayData(void)
{
	std::cout << "|";
	for (int i = FirstName; i <= Phone; i++)
	{
		if (this->information[i].length() > 9)
		{
			for (int j = 0; j < 9; j++)
				std::cout << this->information[i][j];
			std::cout << '.';
		}
		else
		{
			std::cout << std::setw(10);
			std::cout << this->information[i];
		}
		std::cout << "|";
	}
	std::cout << std::endl;
	return;
}
