/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/28 14:00:09 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/03/28 14:04:25 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{	
	{
		Data		*block;
		Data		*c;
		uintptr_t 	ptr;

		block = new Data;

		block->c = 'A';
		block->n = 42;
		block->num = 42.42;

		ptr = Serializer::serialize(block);
		c = Serializer::deserialize(ptr);

		if (c == block)
		{
			std::cout << "Yay Everything went according to plan!" << std::endl;
			std::cout << c->c << std::endl;
			std::cout << c->n << std::endl;
			std::cout << c->num << std::endl;
		}
		else
		{
			std::cout << "HMMMM something went wrong better to check out what went wrong :((" << std::endl;
		}

		delete block;
	}

	return (0);
}
