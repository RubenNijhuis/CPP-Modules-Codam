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
    std::cout << "ClapTrap created with an empty construcor" << std::endl;

    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 10;

    return;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap deconstructed" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap created by copy" << std::endl;
    *this = other;
    return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap created by assertion" << std::endl;

    if (this != &other)
    {
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_hitPoints = other._hitPoints;
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap attacks " << target << ", causing " << this->_attackDamage << " points of damage!";
}

void ClapTrap::takeDamage(uint32_t amount)
{
    std::cout << "ClapTrap took " << amount << " points of damage" << std::endl;
    this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(uint32_t amount)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap has no energy points left to repair himself :(" << std::endl;
        return;
    }

    std::cout << "ClapTrap got repaired and now has " << this->_energyPoints << " energy points" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints--;
}
