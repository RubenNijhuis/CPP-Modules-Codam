/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/23 16:56:31 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <stdint.h>
#include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &other);
		~ClapTrap(void);

		ClapTrap &operator=(const ClapTrap& other);

		////////////////////////////////////////////////////////////////////////

		void attack(const std::string &target);
		void takeDamage(uint32_t amount);
		void beRepaired(uint32_t amount);

	protected:
		std::string _name;
		uint32_t _hitPoints;
		uint32_t _energyPoints;
		uint32_t _attackDamage;
};

#endif