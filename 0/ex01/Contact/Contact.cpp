/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 17:28:37 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/12 21:34:03 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact constructor called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
	return;
}

void Contact::displayData(void)
{
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nick_name << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->darkest_secret << std::endl;
	return;
}
