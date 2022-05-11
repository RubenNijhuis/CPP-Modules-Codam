/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/11 10:38:33 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/05/11 10:39:18 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string weapon): type(weapon)
{
	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << "Weapon destructor called" << std::endl;
}

const	std::string &Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType( const std::string& type )
{
	this->type = type;
}