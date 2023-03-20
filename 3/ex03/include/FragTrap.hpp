/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/20 16:13:05 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

# include <string>
# include <stdint.h>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap& other);
		FragTrap(const std::string name);
		~FragTrap(void);

		FragTrap &operator=(const FragTrap& other);

		////////////////////////////////////////////////////////////////////////

		void attack(const std::string& target);
		void guardGate(void);
        void highFivesFuys(void);

    private:
        uint32_t _hitPoints = 100;
		uint32_t _energyPoints = 100;
		uint32_t _attackDamage = 30;
};

#endif