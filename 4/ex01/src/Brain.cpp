/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/19 23:19:48 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/05/12 14:15:28 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <string>
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain created with an empty constructor" << std::endl;
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

	if (this == &other) return (*this);

	for (int i = 0; i < 100; i++)
	{
		if (other._ideas[i].length() > 0)
		{
			this->_ideas[i].assign(other._ideas[i]);
		}
	}

	return (*this);
}

void Brain::setIdea(uint32_t index, std::string idea)
{
	if (index > 99)
	{
		std::cout << "\033[33mOnly 100 ideas can fit in the brain.\033[0m" << std::endl;
		return;
	}

	this->_ideas[index] = idea;
}

std::string Brain::getIdea(uint32_t index)
{
	if (index <= 99)
	{
		return (this->_ideas[index]);
	}

	return ("\033[33mThere are only 100 ideas per brain.\033[0m");
}