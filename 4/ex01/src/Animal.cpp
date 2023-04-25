/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/04/17 18:30:03 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>
#include <string>

Animal::Animal(void)
{
    std::cout << "Animal created with an empty construcor" << std::endl;
    
    this->_type = "Animal";

    return;
}

Animal::Animal(const std::string& type)
{
    std::cout << "Animal created with a type construcor" << std::endl;

    this->_type = type;

    return;
}

Animal::~Animal(void)
{
    std::cout << "Animal " << this->_type << " deconstructed" << std::endl;
    return;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal created by copy" << std::endl;
    *this = other;
    return;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal created by assertion" << std::endl;

    if (this != &other)
    {
        this->_type = other._type;
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void Animal::makeSound(void) const
{
	std::cout << "This animal doesn't make any sound." << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}
