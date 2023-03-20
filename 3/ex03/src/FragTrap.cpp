/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/20 16:10:57 by rubennijhui   ########   odam.nl         */
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
    
    this->setName("Fragger");
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called with name" << std::endl;

    this->setName(name);
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
        this->setAttackDamage(other.getAttackDamage());
        this->setEnergyPoints(other.getEnergyPoints());
        this->setHitPoints(other.getHitPoints());
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void FragTrap::attack(const std::string &target)
{
    if (this->getEnergyPoints() == 0)
    {
        std::cout << "FragTrap has no energy points left to attack :(" << std::endl;
        return;
    }

    std::cout << "FragTrap has mercilously attacked " << target << ", causing an astounding " << this->getAttackDamage() << " points of damage!" << std::endl;
    
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}

////////////////////////////////////////////////////////////////////////////////

void FragTrap::guardGate(void)
{
    std::cout << "FragTrap is now in Gate keeper mode" << std::endl;
}

void FragTrap::highFivesFuys(void)
{
    std::cout << "FragTrap would be jolly excited to receive a highfive from you!" << std::endl;
}
