/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/03 17:20:55 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
    
# include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(const float posX, const float posY);
        Point(const Point& other);
		~Point(void);

        ////////////////////////////////////////////////////

		Point	&operator=(const Point& other);

        ////////////////////////////////////////////////////

        float getXPos(void) const;
        float getYPos(void) const;

    private:
        Fixed const _x;
        Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);


#endif