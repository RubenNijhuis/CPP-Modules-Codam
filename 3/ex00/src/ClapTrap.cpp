/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/03 15:45:08 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
{
    return;
}

ClapTrap::~ClapTrap(void)
{
    return;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_hitPoints = other._hitPoints;
    }
}

////////////////////////////////////////////////////////////////////////////////

void ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap attacked and caused ";
    std::cout << this->_attackDamage << "of hit points" << std::endl;
}

void ClapTrap::takeDamage(uint32_t amount)
{
    this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(uint32_t amount)
{
    this->_energyPoints += amount;
}
