/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 17:28:37 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/03/02 13:03:32 by rnijhuis      ########   odam.nl         */
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

Contact::Contact(void) : index(0) { }

Contact::~Contact(void) { }

void	Contact::setIndex(uint index)
{
	this->index = index;
}

bool	Contact::setInformation(uint index)
{
	this->index = index;
	for (uint i = FirstName; i <= Secret; i++)
	{
		std::cout << "# " << Contact::fields_name[i] << ":\n+ ";
		std::getline(std::cin, this->information[i]);
		if (this->information[i].length() == 0)
			return (false);
	}
	return (true);
}

void Contact::displayCompactData(void)
{
	std::cout << "|";

	// Output index
	std::cout << std::setw(10);
	std::cout << this->index;
	std::cout << "|";

	for (uint i = FirstName; i <= Nickname; i++)
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
}

void Contact::displayAllData(void)
{
	for (uint i = FirstName; i <= Secret; i++)
	{
		std::cout << "# " << this->information[i] << std::endl;
	}
	std::cout << std::endl;
}
