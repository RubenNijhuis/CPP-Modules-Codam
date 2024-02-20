/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 09:52:22 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/19 10:04:02 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

template<typename T >
const T& max(const T &x, const T &y)
{
	return (x >= y ? x : y);
}

template<typename U>
const U& min(const U &x, const U &y)
{
	return (x <= y ? x : y);
}

template<typename V>
void swap(V &x, V &y)
{
	V temp = x;
	x = y;
	y = temp;
}

#endif