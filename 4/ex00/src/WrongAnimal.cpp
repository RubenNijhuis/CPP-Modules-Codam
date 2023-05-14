/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 18:58:28 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/05/12 13:54:35 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>
#include <string>

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal created with an empty constructor" << std::endl;
    
    this->_type = "WrongAnimal";

    return;
}

WrongAnimal::WrongAnimal(const std::string& type)
{
    std::cout << "WrongAnimal created with a type constructor" << std::endl;

    this->_type = type;

    return;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal " << this->_type << " deconstructed" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal created by copy" << std::endl;
    *this = other;
    return;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal created by assertion" << std::endl;

    if (this != &other)
    {
        this->_type = other._type;
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void WrongAnimal::makeSound(void) const
{
	std::cout << "This animal doesn't make any sound." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}
