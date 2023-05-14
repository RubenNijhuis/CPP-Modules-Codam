/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 18:59:26 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/05/12 13:54:35 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat created with an empty constructor" << std::endl;

    this->_type = "WrongCat";

    return;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat " << this->_type << " deconstructed" << std::endl;
    return;
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat created by copy" << std::endl;
    *this = other;
    return;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat created by assertion" << std::endl;

    if (this != &other)
    {
        this->_type = other._type;
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void WrongCat::makeSound() const
{
    std::cout << "Miauw" << std::endl;
}
