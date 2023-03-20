/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/19 15:09:37 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <string>
#include <iostream>

////////////////////////////////////////////////////////////////////////////////
// Constuctors
////////////////////////////////////////////////////////////////////////////////

DiamondTrap::DiamondTrap(void): ClapTrap("default_clap_name")
{
    std::cout << "DiamondTrap empty contructor" << std::endl;
    
    this->setName("Fragger");
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(ScavTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap constructor called with name" << std::endl;

    this->setName(name);
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(ScavTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    std::cout << "DiamondTrap created by copy" << std::endl;

    *this = other;
    return;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap deconstructed" << std::endl;
    return;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "DiamondTrap created by assertion" << std::endl;
    
    if (this != &other)
    {
        this->setAttackDamage(other.getAttackDamage());
        this->setEnergyPoints(other.getEnergyPoints());
        this->setHitPoints(other.getHitPoints());
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void DiamondTrap::attack(const std::string &target)
{
    if (this->getEnergyPoints() == 0)
    {
        std::cout << "DiamondTrap has no energy points left to attack :(" << std::endl;
        return;
    }

    std::cout << "DiamondTrap has mercilously attacked " << target << ", causing an astounding " << this->getAttackDamage() << " points of damage!" << std::endl;
    
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}

////////////////////////////////////////////////////////////////////////////////

void DiamondTrap::guardGate(void)
{
    std::cout << "DiamondTrap is now in Gate keeper mode" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap is me" << std::endl;
}
