/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:16:44 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/03 17:22:17 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

////////////////////////////////////////////////////////////////////////////////

Fixed::Fixed(void)
{
	std::cout << "Fixed empty constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const float value)
{
	std::cout << "Fixed float constructor called" << std::endl;
	this->_fixedPointValue = 8;
}

Fixed::Fixed(const int value)
{
	std::cout << "Fixed int constructor called" << std::endl;
	this->_fixedPointValue = 8;
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
		this->_fixedPointValue = obj._fixedPointValue;
	return *this;
}

////////////////////////////////////////////////////////////////////////////////

int Fixed::getRawBits(void) const
{
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(const int rawBits)
{
	this->_fixedPointValue = rawBits;
}

float Fixed::toFloat() const
{
	
}

int Fixed::toInt() const
{
	
}