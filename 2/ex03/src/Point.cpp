/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
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
#include "Point.hpp"

////////////////////////////////////////////////////////////////////////////////

Point::Point(void): _x(0), _y(0)
{
    return;
}

Point::Point(const float posX, const float posY) : _x(posX), _y(posY)
{
    return;
}

Point::Point(const Point& other)
{
    *this = other;
    return;
}

Point& Point::operator=(const Point& obj)
{
	// std::cout << "Point assignment operator called" << std::endl;
	if (this != &obj)
    {
        this->_x = obj._x;
        this->_y = obj._y;
    }
    return *this;
}

Point::~Point(void)
{
	// std::cout << "Point destructor called" << std::endl;
}

///////////////////////////////////////////////////////////////////////////////

float Point::getXPos() const
{
    return (this->_x.toFloat());
}

float Point::getYPos() const
{
    return (this->_y.toFloat());
}
