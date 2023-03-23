/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/23 17:09:49 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib>
#include <iostream>

#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap clappert("clappert");

    for (int i = 0; i < 10; i++)
    {
        clappert.attack("Bad guy");
        clappert.takeDamage(10);
    }

    std::cout << std::endl;
    
    clappert.beRepaired(10);
    clappert.attack("someone else");

    return (0);
}
