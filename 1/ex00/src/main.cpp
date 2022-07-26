/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/07/26 15:10:38 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <cstdlib>
#include <iostream>

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int32_t	main(void)
{
	std::cout << "This is one way to create a zombie:" << std::endl;
	Zombie zombie("Jan");
	zombie.announce();

	std::cout << "This is a dynamic zombie:" << std::endl;
	Zombie *dynamic_zombie = newZombie("Henk");
	dynamic_zombie->announce();
	delete dynamic_zombie;

	std::cout << "This zombie is a random chump:" << std::endl;
	randomChump("Kees");

	return (0);
}