/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/23 17:17:24 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap created with an empty construcor" << std::endl;

    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    this->_name = "ClapTrap";

    return;
}

ClapTrap::ClapTrap(const std::string& name)
{
    std::cout << "ClapTrap created with a name construcor" << std::endl;

    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    this->_name = name;

    return;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " deconstructed" << std::endl;
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
        this->_name = other._name;
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy points left to attack :(" << std::endl;
        return;
    }
    else if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " has died and can't attack" << std::endl;
        return;
    }

    this->_energyPoints--;

    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(uint32_t amount)
{
    uint32_t amountDamageTaken;

    if (this->_hitPoints < amount)
    {
        amountDamageTaken = this->_hitPoints;
        this->_hitPoints = 0;
        std::cout << "TEST" << this->_hitPoints << std::endl;
    }
    else
    {
        amountDamageTaken = amount;
        this->_hitPoints -= amount;
    }


    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " has taken too much damage and has died :(" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " took " << amountDamageTaken << " points of damage" << std::endl;
    }
}

void ClapTrap::beRepaired(uint32_t amount)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << "has no energy points left to repair himself :(" << std::endl;
        return;
    }

    this->_hitPoints += amount;
    this->_energyPoints--;

    std::cout << "ClapTrap " << this->_name << " got repaired and now has " << this->_energyPoints << " energy points and " << this->_hitPoints << " hitpoints" << std::endl;
}
