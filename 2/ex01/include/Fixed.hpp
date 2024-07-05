/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/03 17:20:55 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(const float value);
	Fixed(const int value);
	Fixed(const Fixed &other);
	~Fixed(void);

	Fixed &operator=(const Fixed &other);

	int getRawBits(void) const;
	void setRawBits(const int rawBits);

	float toFloat() const;
	int toInt() const;

private:
	int64_t _fixedPointValue;
	static const int _numFractBits = 63;
};

std::ostream &operator<<(std::ostream &ostr, const Fixed &instance);

#endif