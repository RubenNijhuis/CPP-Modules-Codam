/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/11 22:45:32 by rubennijhui   ########   odam.nl         */
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
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap has no energy points left to attack :(" << std::endl;
        return;
    }

    std::cout << "ClapTrap attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;

}

void ClapTrap::takeDamage(uint32_t amount)
{
    uint32_t amountDamageTaken;

    if (this->_hitPoints < amount)
    {
        amountDamageTaken = this->_hitPoints;
        this->_hitPoints = 0;
    }
    else 
    {
        amountDamageTaken = amount;
        this->_hitPoints -= amount;
    }
    std::cout << "ClapTrap took " << amountDamageTaken << " points of damage" << std::endl;
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
