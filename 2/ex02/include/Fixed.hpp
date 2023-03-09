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
# define FIXED_HPP
    
# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const float value);
		Fixed(const int value);
		Fixed(const Fixed& other);
		~Fixed(void);

        ////////////////////////////////////////////////////

		Fixed	&operator=(const Fixed& other);

        bool	operator>(const Fixed& other) const;
        bool	operator<(const Fixed& other) const;
        bool	operator>=(const Fixed& other) const;
        bool	operator<=(const Fixed& other) const;
        bool	operator==(const Fixed& other) const;
        bool	operator!=(const Fixed& other) const;

        Fixed	operator+(const Fixed& other) const;
        Fixed	operator-(const Fixed& other) const;
        Fixed	operator*(const Fixed& other) const;
        Fixed	operator/(const Fixed& other) const;

        Fixed	operator++(void);
        Fixed	operator++(int);
        
        Fixed	operator--(void);
        Fixed	operator--(int);

        ////////////////////////////////////////////////////

		int		getRawBits(void) const;
		void	setRawBits(const int rawBits);

		float	toFloat() const;
		int		toInt() const;

        ////////////////////////////////////////////////////

        static Fixed		&min(Fixed &obj1, Fixed &obj2);
	    static const Fixed	&min(const Fixed &obj1, const Fixed &obj2);

	    static Fixed		&max(Fixed &obj1, Fixed &obj2);
	    static const Fixed	&max(const Fixed &obj1, const Fixed &obj2);

	private:
        // Set to 32 bits as accurate division requires a larger scaled number
		int32_t				_fixedPointValue;
		static const int	_numFractBits = 8;
};

std::ostream& operator<<(std::ostream &ostr, const Fixed &instance);

#endif