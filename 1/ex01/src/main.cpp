/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/05/02 18:10:56 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <cstdlib>
#include <iostream>

int32_t	main(void)
{
	Zombie*	zombies = zombieHorde(5, "Ruben");

	for (int i = 0; i < 7; i++)
		zombies[i].announce();

	delete[] zombies;

	return (0);
}