/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:16:44 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/12 15:08:07 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

////////////////////////////////////////////////////////////////////////////////

Fixed::Fixed(void)
{
	std::cout << "Fixed default constructor called" << std::endl;

	this->_fixedPointValue = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed destructor called" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

Fixed::Fixed(Fixed const& other)
{
	std::cout << "Fixed copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=( Fixed const & obj )
{
	std::cout << "Fixed assignment operator called" << std::endl;
    
	if (this != &obj)
    {
		this->_fixedPointValue = obj._fixedPointValue;
    }

	return *this;
}

////////////////////////////////////////////////////////////////////////////////

int	Fixed::getRawBits(void) const
{
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(const int rawBits)
{
	this->_fixedPointValue = rawBits;
}