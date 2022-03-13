/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 17:28:37 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/13 12:43:01 by rubennijhui   ########   odam.nl         */
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
	this->contacts[this->amount].setInformation();
	this->amount++;
	return;
}

void PhoneBook::searchContact(void)
{
	std::cout << "           |          |          |           " << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].displayData();
	return;
}