/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/05/12 14:14:41 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog created with an empty constructor" << std::endl;

	this->_brain = new Brain();

	if (!this->_brain)
	{
		std::cerr << "Failure to allocate Brain in Dog" << std::endl;
		exit(1);
	}
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog " << this->_type << " deconstructed" << std::endl;
	delete this->_brain;
	return;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog created by copy" << std::endl;
	*this = other;

	this->_brain = new Brain(*other._brain);
	if (!this->_brain)
	{
		std::cerr << "Failure to allocate Brain in Dog" << std::endl;
		exit(1);
	}
	
	return;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog created by assertion" << std::endl;

	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = other._brain;
	}

	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->_brain);
}
