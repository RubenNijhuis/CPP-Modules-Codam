/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/20 14:30:49 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib>
#include <iostream>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
    DiamondTrap dia;

    std::cout << "Hit points:    " << dia.getHitPoints() << std::endl;
    std::cout << "Energy points: " << dia.getEnergyPoints() << std::endl;
    std::cout << "Attack damage: " << dia.getAttackDamage() << std::endl;
    dia.whoAmI();

    return (0);
}
