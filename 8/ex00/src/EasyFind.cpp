/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   EasyFind.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/22 13:14:17 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/22 13:14:35 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

const char *NotFoundException::what(void) const throw()
{
	return ("Int not found in container");
}
