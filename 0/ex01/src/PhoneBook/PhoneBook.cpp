/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 17:28:37 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/07/24 18:34:49 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->amount = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void PhoneBook::addContact(void)
{
	// If the list is full we need to shift all the contacts
	if (this->amount == 8)
	{
		for (uint32_t i = 0; i < 7; i++)
			this->contacts[i] = this->contacts[i + 1];
		if (this->contacts[this->amount - 1].setInformation() == false)
			return;
	}
	else
	{
		if (this->contacts[this->amount].setInformation() == false)
			return;
		this->amount++;
	}
	return;
}

void PhoneBook::searchContact(void)
{
	uint32_t	selected_contact_id;
	std::string selected_content_str;
	bool		run = true;
	bool		correct_format = true;

	if (this->amount > 0)
	{
		// Display all the contacts in the list
		std::cout << "|FIRSTNAME | LASTNAME | NICKNAME |  NUMBER  |" << std::endl;
		for (uint32_t i = 0; i < this->amount; i++)
		{
			this->contacts[i].displayCompactData();
		}
		std::cout << std::endl;

		// Setup a new request loop to ask which contact is to be shown in full
		while (run)
		{
			// Reset variable each loop
			correct_format = true;

			// After displaying the data we request which specific user we need to display
			std::cout << "Which contact do you want to select?" << std::endl;
			std::cout << ">";
			std::getline(std::cin, selected_content_str);

			// Try and catch in case the input is incorrect
			try {
				selected_contact_id = std::stoi(selected_content_str);
			}
			catch (...) {
				correct_format = false;
				std::cout << "Invalid value (must be a digit)" << std::endl;
			}

			// If format of input is correct check for the value
			if (correct_format == true)
			{
				if (selected_contact_id > 8 || selected_contact_id < 1 || selected_contact_id > this->amount)
					std::cout << "Invalid value. Input must be between 1 and " << this->amount << std::endl;
				else
				{
					this->contacts[selected_contact_id - 1].displayAllData();
					run = false;
				}
			}
		}
	}
	return;
}