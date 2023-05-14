/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 15:29:44 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/05/12 13:54:35 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
    std::cout << "Cat created with an empty constructor" << std::endl;

    this->_type = "Cat";

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

////////////////////////////////////////////////////////////////////////////////

void Cat::makeSound() const
{
    std::cout << "Miauw" << std::endl;
}
