/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/20 14:07:28 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP
# define DIAMOND_TRAP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

# include <string>
# include <stdint.h>

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap(const std::string name);
		~DiamondTrap(void);

		DiamondTrap &operator=(const DiamondTrap& other);

		////////////////////////////////////////////////////////////////////////

		void attack(const std::string& target);
		void guardGate(void);
        void whoAmI(void);

    private:
		std::string _name;
};

#endif