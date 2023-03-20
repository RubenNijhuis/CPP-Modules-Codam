/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/20 16:23:12 by rubennijhui   ########   odam.nl         */
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

		////////////////////////////////////////////////////////////////////////

		void setName(const std::string name);
		std::string getName() const;

		void setHitPoints(uint32_t amount);
		uint32_t getHitPoints(void) const;

		void setEnergyPoints(uint32_t amount);
		uint32_t getEnergyPoints(void) const;

		void setAttackDamage(uint32_t amount);
		uint32_t getAttackDamage(void) const;

	private:
		std::string _name;
	    uint32_t _hitPoints = 10;
	    uint32_t _energyPoints = 10;
	    uint32_t _attackDamage = 0;
};

#endif