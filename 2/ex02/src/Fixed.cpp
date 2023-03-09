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
	// std::cout << "Fixed empty constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

/**
 * Using the rounding fix from https://www.youtube.com/watch?v=ZMsrZvBmQnU&t=400s
 * to fix the "underestamating" of the fixed point notation we bias it by forcing
 * it to round up at the end
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
	// std::cout << "Fixed destructor called" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Fixed copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	// std::cout << "Fixed assignment operator called" << std::endl;
	if (this != &obj)
		this->setRawBits(obj.getRawBits());
	return *this;
}

////////////////////////////////////////////////////////////////////////////////

bool Fixed::operator>(const Fixed& other) const
{
    return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const
{
    return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other) const
{
    return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (this->getRawBits() != other.getRawBits());
}

////////////////////////////////////////////////////////////////////////////////

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed result;

    result.setRawBits(this->getRawBits() + other.getRawBits());
    return (result);
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed result;

    result.setRawBits(this->getRawBits() - other.getRawBits());
    return (result);
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed result;

    int64_t unscaledResult = int64_t(this->getRawBits()) * int64_t(other.getRawBits());

    result.setRawBits(unscaledResult >> this->_numFractBits);

    return (result);
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed result;

    int64_t scaledPartialResult = int64_t(this->getRawBits()) << this->_numFractBits;

    result.setRawBits(scaledPartialResult / other.getRawBits());

    return (result);
}

////////////////////////////////////////////////////////////////////////////////

Fixed Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	beforeIncrement(*this);

	++(*this);
	return (beforeIncrement);
}

Fixed	Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	beforeDecrement(*this);

	--(*this);
	return (beforeDecrement);
}

////////////////////////////////////////////////////////////////////////////////


std::ostream& operator<<(std::ostream &ostr, const Fixed &instance)
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

////////////////////////////////////////////////////////////////////////////////

float Fixed::toFloat() const
{
    float result;

    result = this->getRawBits() / float(1 << this->_numFractBits);

    return (result);
}

int Fixed::toInt() const
{
	return (this->getRawBits() >> this->_numFractBits);
}

////////////////////////////////////////////////////////////////////////////////

Fixed &Fixed::max(Fixed &lfp, Fixed &rfp)
{
	return (lfp > rfp ? lfp : rfp);
}

const Fixed &Fixed::max(const Fixed &lfp, const Fixed &rfp)
{
	return (lfp > rfp ? lfp : rfp);
}

Fixed &Fixed::min(Fixed &lfp, Fixed &rfp)
{
	return (lfp < rfp ? lfp : rfp);
}

const Fixed &Fixed::min(const Fixed &lfp, const Fixed &rfp)
{
	return (lfp < rfp ? lfp : rfp);
}