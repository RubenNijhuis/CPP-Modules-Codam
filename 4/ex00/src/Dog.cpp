/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/24 15:27:48 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog(void)
{
    std::cout << "Dog created with an empty construcor" << std::endl;

    this->_type = "Dog";

    return;
}

Dog::Dog(const std::string& type)
{
    std::cout << "Dog created with a type construcor" << std::endl;

    this->_type = type;

    return;
}

Dog::~Dog(void)
{
    std::cout << "Dog " << this->_type << " deconstructed" << std::endl;
    return;
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog created by copy" << std::endl;
    *this = other;
    return;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog created by assertion" << std::endl;

    if (this != &other)
    {
        this->_type = other._type;
    }

    return (*this);
}
