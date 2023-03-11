/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/11 22:45:27 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib>
#include <iostream>

#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap clappy;

    clappy.attack("Ruben");     // 1
    clappy.beRepaired(2);       // 2
    clappy.attack("Ruben");     // 3
    clappy.beRepaired(2);       // 4
    clappy.beRepaired(4);       // 5
    clappy.attack("Stephan");   // 6
    clappy.attack("Stephan");   // 7
    clappy.attack("Stephan");   // 8
    clappy.attack("Stephan");   // 9
    clappy.attack("Stephan");   // 10

    // No energy left so this should tell us that there are no energy points left
    clappy.attack("Stephan");

    return (0);
}
