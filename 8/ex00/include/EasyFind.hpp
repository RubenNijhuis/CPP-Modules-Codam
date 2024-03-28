/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 09:52:22 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/22 14:33:07 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASFYFIND_HPP__
#define __EASFYFIND_HPP__

#include <algorithm>

class NotFoundException : public std::exception 
{
	virtual const char *what() const throw();
};

template <typename T>
int	* easyfind(T &vec, int num)
{
	typename T::iterator iter;

	iter = std::find(vec.begin(), vec.end(), num);

	if (iter == vec.end())
	{
		throw NotFoundException();
	}

	return (&(*iter));
}

#endif