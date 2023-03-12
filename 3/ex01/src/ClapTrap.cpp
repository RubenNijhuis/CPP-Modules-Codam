/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/12 13:37:10 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <stdint.h>
#include <string>
#include <iostream>

////////////////////////////////////////////////////////////////////////////////
// Constuctors
////////////////////////////////////////////////////////////////////////////////

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap created with an empty construcor" << std::endl;

    this->setEnergyPoints(10);
    this->setHitPoints(10);
    this->setAttackDamage(10);

    return;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap deconstructed" << std::endl;
    return;
}

ClapTrap(const std::string& name)
{
    std::cout << "ClapTrap created with the name construcor" << std::endl;
    
    this->setEnergyPoints(10);
    this->setHitPoints(10);
    this->setAttackDamage(10);
    this->setName(name);
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
        this->setAttackDamage(other.getAttackDamage());
        this->setEnergyPoints(other.getEnergyPoints());
        this->setHitPoints(other.getHitPoints());
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////
// Member functions
////////////////////////////////////////////////////////////////////////////////

void ClapTrap::attack(const std::string &target)
{
    if (this->getEnergyPoints() == 0)
    {
        std::cout << "ClapTrap has no energy points left to attack :(" << std::endl;
        return;
    }

    std::cout << "ClapTrap attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void ClapTrap::takeDamage(uint32_t amount)
{
    uint32_t amountDamageTaken;

    if (this->getHitPoints() < amount)
    {
        amountDamageTaken = this->getHitPoints();
        this->setHitPoints(0);
    }
    else 
    {
        amountDamageTaken = amount;
        this->setHitPoints(this->getHitPoints() - amount);
    }

    std::cout << "ClapTrap took " << amountDamageTaken << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(uint32_t amount)
{
    if (this->getEnergyPoints() == 0)
    {
        std::cout << "ClapTrap has no energy points left to repair himself :(" << std::endl;
        return;
    }

    std::cout << "ClapTrap got repaired and now has " << this->getEnergyPoints() << " energy points" << std::endl;
    this->setHitPoints(this->getHitPoints() + amount);
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}

////////////////////////////////////////////////////////////////////////////////
// Getters & Setters
////////////////////////////////////////////////////////////////////////////////

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

void ClapTrap::setHitPoints(uint32_t amount)
{
    this->_hitPoints = amount;
}

uint32_t ClapTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}

void ClapTrap::setEnergyPoints(uint32_t amount)
{
    this->_energyPoints = amount;
}

uint32_t ClapTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}

void ClapTrap::setAttackDamage(uint32_t amount)
{
    this->_attackDamage = amount;
}

uint32_t ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}
