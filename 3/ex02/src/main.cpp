/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/19 19:09:06 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib>
#include <iostream>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
    FragTrap flaggy("flaggy");
    ScavTrap scavvy("scavvy");

    scavvy.attack("Ruben");     // 1
    scavvy.beRepaired(2);       // 2
    scavvy.attack("Ruben");     // 3
    scavvy.beRepaired(2);       // 4
    scavvy.beRepaired(4);       // 5
    scavvy.attack("Stephan");   // 6
    scavvy.attack("Stephan");   // 7
    scavvy.attack("Stephan");   // 8
    scavvy.attack("Stephan");   // 9
    scavvy.attack("Stephan");   // 10

    // No energy left so this should tell us that there are no energy points left
    scavvy.attack("Stephan");
    scavvy.guardGate();
    flaggy.highFivesFuys();

    return (0);
}
