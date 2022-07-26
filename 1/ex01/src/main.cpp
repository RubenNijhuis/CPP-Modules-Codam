/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/07/26 17:42:14 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <cstdlib>
#include <iostream>

int32_t	main(void)
{
	uint32_t amount_zombies = 5;
	Zombie*	zombies = zombieHorde(amount_zombies, "Ruben");

	for (uint32_t i = 0; i < amount_zombies; i++)
	{
		zombies[i].announce();
	}

	delete[] zombies;

	return (0);
}