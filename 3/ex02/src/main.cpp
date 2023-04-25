/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/23 17:26:20 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib>
#include <iostream>

#include "FragTrap.hpp"

int	main(void)
{
    FragTrap fraggert("fraggert");

    for (int i = 0; i < 10; i++)
    {
        fraggert.attack("Bad guy");
        fraggert.takeDamage(10);
    }

    std::cout << std::endl;

    fraggert.beRepaired(10);
    fraggert.attack("someone else");



    return (0);
}
