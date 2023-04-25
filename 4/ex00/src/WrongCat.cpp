/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 18:59:26 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/04/17 18:59:27 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat created with an empty construcor" << std::endl;

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
