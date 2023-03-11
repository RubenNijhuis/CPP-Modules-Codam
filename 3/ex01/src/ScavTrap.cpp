/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/11 23:00:35 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap created with an empty construcor" << std::endl;

    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 10;

    return;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap deconstructed" << std::endl;
    return;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "ScavTrap created by copy" << std::endl;
    *this = other;
    return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap created by assertion" << std::endl;

    if (this != &other)
    {
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_hitPoints = other._hitPoints;
    }

    return (*this);
}
