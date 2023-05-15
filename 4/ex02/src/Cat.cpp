/* ************************************************************************** */
/* 	                                                                        */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 15:29:44 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/04/17 18:29:48 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat created with an empty constructor" << std::endl;

	this->_brain = new Brain();
	if (!this->_brain)
	{
		std::cerr << "Failure to allocate Brain in Dog" << std::endl;
		exit(1);
	}
	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat " << this->_type << " deconstructed" << std::endl;
	delete this->_brain;
	return;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat created by copy" << std::endl;
	*this = other;

	this->_brain = new Brain(*other._brain);
	if (!this->_brain)
	{
		std::cerr << "Failure to allocate Brain in Cat" << std::endl;
		exit(1);
	}

	return;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat created by assertion" << std::endl;

	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = new Brain(*other._brain);
		if (!this->_brain)
		{
			std::cerr << "Failure to allocate Brain in Dog" << std::endl;
			exit(1);
		}
	}

	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void Cat::makeSound() const
{
	std::cout << "Miauw" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->_brain);
}
