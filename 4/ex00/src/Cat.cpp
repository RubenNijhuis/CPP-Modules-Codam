/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/24 15:27:37 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include <string>

Cat::Cat(void)
{
    std::cout << "Cat created with an empty construcor" << std::endl;

    this->_type = "Cat";

    return;
}

Cat::Cat(const std::string& type)
{
    std::cout << "Cat created with a type construcor" << std::endl;

    this->_type = type;

    return;
}

Cat::~Cat(void)
{
    std::cout << "Cat " << this->_type << " deconstructed" << std::endl;
    return;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat created by copy" << std::endl;
    *this = other;
    return;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat created by assertion" << std::endl;

    if (this != &other)
    {
        this->_type = other._type;
    }

    return (*this);
}
