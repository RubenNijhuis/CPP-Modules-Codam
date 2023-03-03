/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/02 13:03:32 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <cstdlib>
#include <iostream>

int	main(void)
{
	uint amount_zombies = 5;
	Zombie*	zombies = zombieHorde(amount_zombies, "Ruben");

	for (size_t i = 0; i < amount_zombies; i++)
	{
		zombies[i].announce();
	}

	delete[] zombies;

	return (0);
}