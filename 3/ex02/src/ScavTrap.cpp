/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/16 14:55:29 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <string>
#include <iostream>

////////////////////////////////////////////////////////////////////////////////
// Constuctors
////////////////////////////////////////////////////////////////////////////////

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap empty contructor" << std::endl;
    
    this->setName("Scavver");
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called with name" << std::endl;

    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "ScavTrap created by copy" << std::endl;

    *this = other;
    return;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap deconstructed" << std::endl;
    return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap created by assertion" << std::endl;
    
    if (this != &other)
    {
        this->setAttackDamage(other.getAttackDamage());
        this->setEnergyPoints(other.getEnergyPoints());
        this->setHitPoints(other.getHitPoints());
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void ScavTrap::attack(const std::string &target)
{
    if (this->getEnergyPoints() == 0)
    {
        std::cout << "ScavTrap has no energy points left to attack :(" << std::endl;
        return;
    }

    std::cout << "ScavTrap has mercilously attacked " << target << ", causing an astounding " << this->getAttackDamage() << " points of damage!" << std::endl;
    
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}

////////////////////////////////////////////////////////////////////////////////

void ScavTrap::guardGate(void)
{
    std::cout << "Scavtrap is now in Gate keeper mode" << std::endl;
}
