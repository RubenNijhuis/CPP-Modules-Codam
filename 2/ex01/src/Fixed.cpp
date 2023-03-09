/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:16:44 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/03 18:55:28 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include "Fixed.hpp"

////////////////////////////////////////////////////////////////////////////////

Fixed::Fixed(void)
{
	std::cout << "Fixed empty constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const float value)
{
    int power = pow(2, this->_numFractBits);

	this->_fixedPointValue = roundf(value * power);

	std::cout << "Fixed float constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    this->_fixedPointValue = value << this->_numFractBits;

	std::cout << "Fixed int constructor called" << std::endl;
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

Fixed & Fixed::operator=(Fixed const & obj)
{
	std::cout << "Fixed assignment operator called" << std::endl;
	if (this != &obj)
		this->_fixedPointValue = obj._fixedPointValue;
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
    int		power = pow(2, this->_numFractBits);
	float	result = (float)this->_fixedPointValue / power;

	return (result);
}

int Fixed::toInt() const
{
	return (this->_fixedPointValue >> this->_numFractBits);
}