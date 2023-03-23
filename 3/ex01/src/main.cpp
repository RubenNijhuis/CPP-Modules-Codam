/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/23 17:20:26 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib>
#include <iostream>

#include "ScavTrap.hpp"

int	main(void)
{
    ScavTrap scavvert("scavvert");

    for (int i = 0; i < 10; i++)
    {
        scavvert.attack("Bad guy");
        scavvert.takeDamage(10);
    }

    std::cout << std::endl;
    
    scavvert.guardGate();
    
    scavvert.beRepaired(10);
    scavvert.attack("someone else");

    return (0);
}
