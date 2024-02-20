/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 09:52:22 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/19 17:28:17 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <string>

template<typename T>
void iter(T *array, size_t arr_len, void (*func)(T &))
{
	if (array == NULL || func == NULL) return;

	for (size_t i = 0; i < arr_len; i++)
	{
		func(array[i]);
	}
}

#endif
 