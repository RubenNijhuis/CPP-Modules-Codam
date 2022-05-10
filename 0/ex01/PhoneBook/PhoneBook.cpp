/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 17:28:37 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/05/10 18:00:10 by rnijhuis      ########   odam.nl         */
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
	if (this->amount == 8)
	{
		for (int i = 0; i < 7; i++)
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
	if (this->amount > 0)
	{
		std::cout << "|FIRSTNAME | LASTNAME | NICKNAME |  NUMBER  |" << std::endl;
		for (int i = 0; i < this->amount; i++)
			this->contacts[i].displayData();
	}
	return;
}