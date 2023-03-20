/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/20 16:12:42 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

# include <string>
# include <stdint.h>
# include <string>

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap& other);
		ScavTrap(const std::string name);
		~ScavTrap(void);

		ScavTrap &operator=(const ScavTrap& other);

		////////////////////////////////////////////////////////////////////////

		void attack(const std::string& target);
		void guardGate(void);

    private:
        uint32_t _hitPoints = 100;
		uint32_t _energyPoints = 50;
		uint32_t _attackDamage = 20;
};

#endif