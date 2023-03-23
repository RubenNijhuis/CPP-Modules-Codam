/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/23 17:24:46 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <string>
#include <iostream>

////////////////////////////////////////////////////////////////////////////////
// Constuctors
////////////////////////////////////////////////////////////////////////////////

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap empty contructor" << std::endl;
    
    this->_name = "Fragger";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called with name" << std::endl;

    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "FragTrap created by copy" << std::endl;

    *this = other;
    return;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap deconstructed" << std::endl;
    return;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap created by assertion" << std::endl;
    
    if (this != &other)
    {
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_hitPoints = other._hitPoints;
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void FragTrap::attack(const std::string &target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "FragTrap " << this->_name << " has no energy points left to attack :(" << std::endl;
        return;
    }

    std::cout << "FragTrap has mercilously attacked " << target << ", causing an astounding " << this->_attackDamage << " points of damage!" << std::endl;
    
    this->_energyPoints = this->_energyPoints - 1;
}

////////////////////////////////////////////////////////////////////////////////

void FragTrap::highFivesFuys(void)
{
    std::cout << "FragTrap " << this->_name << " would be jolly excited to receive a highfive from you!" << std::endl;
}
