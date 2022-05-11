/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/11 10:36:45 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/05/11 14:34:27 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = nullptr;
	std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << "HumanB destructor called" << std::endl;
}

void	HumanB::setWeapon( Weapon& newWeapon )
{
	this->weapon = &newWeapon;
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << this->name << " can't attack because they have no weapon" << std::endl;
}