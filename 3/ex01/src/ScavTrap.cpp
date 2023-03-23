/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/23 17:04:30 by rubennijhui   ########   odam.nl         */
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
    
    this->_name = "Scavver";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
    std::cout << "ScavTrap constructor called with name" << std::endl;

    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
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
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_hitPoints = other._hitPoints;
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy points left to attack :(" << std::endl;
        return;
    }
    else if (this->_hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " has died and can't attack" << std::endl;
        return;
    }

    std::cout << "ScavTrap " << this->_name << " mercilously attacked " << target << ", causing an astounding " << this->_attackDamage << " points of damage!" << std::endl;
    
    this->_energyPoints--;
}

////////////////////////////////////////////////////////////////////////////////

void ScavTrap::guardGate(void)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "Scavtrap " << this->_name << " is now in Gate keeper mode but has no hitpoints left so is pretty useless" << std::endl;
        return;
    }

    std::cout << "Scavtrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
