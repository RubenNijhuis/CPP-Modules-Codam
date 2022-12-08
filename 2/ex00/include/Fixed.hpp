/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/07/26 23:49:35 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{

public:
	Fixed(void);
	Fixed(const Fixed& other);
	~Fixed(void);

	Fixed	&operator=(const Fixed& other);

	int		getRawBits(void ) const;
	void	setRawBits(const int rawBits);

private:
	int					_fixedPointValue;
	static const int	_numFractBits = 8;

};

#endif