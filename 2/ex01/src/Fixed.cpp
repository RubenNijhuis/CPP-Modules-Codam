/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:16:44 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/12 15:08:47 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include "Fixed.hpp"

////////////////////////////////////////////////////////////////////////////////

Fixed::Fixed(void)
{
	this->_fixedPointValue = 0;
    
	std::cout << "Fixed empty constructor called" << std::endl;
}

/**
 * Using the rounding fix from https://www.youtube.com/watch?v=ZMsrZvBmQnU&t=400s
 * to fix the "underestamating" of the fixed point notation we bias it by forcing
 * it to round up at the end. Could've used the round function, honestly this seemed more reasonable
 */

Fixed::Fixed(const float value)
{
	// std::cout << "Fixed float constructor called" << std::endl;
    int32_t scaledValue = value * float(1 << this->_numFractBits) + (value >= 0 ? 0.5 : -0.5);

	this->setRawBits(scaledValue);
}

Fixed::Fixed(const int value)
{
	// std::cout << "Fixed int constructor called" << std::endl;
    this->setRawBits(value << this->_numFractBits);
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed destructor called" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

Fixed::Fixed(Fixed const& other)
{
	*this = other;

	std::cout << "Fixed copy constructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & obj)
{
	if (this != &obj)
    {
		this->_fixedPointValue = obj._fixedPointValue;
    }

	std::cout << "Fixed assignment operator called" << std::endl;

	return *this;
}

////////////////////////////////////////////////////////////////////////////////

std::ostream& operator<<(std::ostream &ostr, Fixed const &instance)
{
	ostr << instance.toFloat();
	return (ostr);
}

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
    float result;

    result = this->getRawBits() / float(1 << this->_numFractBits);

    return (result);
}

int Fixed::toInt() const
{
	return (this->_fixedPointValue >> this->_numFractBits);
}