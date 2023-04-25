/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/19 23:19:48 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/04/24 21:31:51 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <string>
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain created with an empty construcor" << std::endl;
	return;
}

Brain::~Brain(void)
{
	std::cout << "Brain deconstructed" << std::endl;
	return;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain created by copy" << std::endl;
	*this = other;
	return;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain created by assinging" << std::endl;

	if (this == &other)
	{
		return (*this);
	}

	for (int i = 0; i < 100; i++)
	{
		if (other._ideas[i].length() > 0)
		{
			this->_ideas[i].assign(other._ideas[i]);
		}
	}

	return (*this);
}
