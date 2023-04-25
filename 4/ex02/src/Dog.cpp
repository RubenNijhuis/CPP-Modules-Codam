/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/04/24 21:39:09 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog(void): Animal("Dog")
{
    std::cout << "Dog created with an empty construcor" << std::endl;

    this->brain = new Brain();

    if (!this->brain)
    {
        std::cerr << "Failure to allocate Brain in Dog" << std::endl;
        exit(1);
    }
    return;
}

Dog::~Dog(void)
{
    std::cout << "Dog " << this->_type << " deconstructed" << std::endl;
    delete this->brain;
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

////////////////////////////////////////////////////////////////////////////////

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}
