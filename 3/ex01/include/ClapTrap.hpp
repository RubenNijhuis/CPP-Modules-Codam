/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                          :+:    :+:         */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/03 15:45:50 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <stdint.h>
# include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap& other);
		~ClapTrap(void);

		ClapTrap &operator=(const ClapTrap& other);

        ////////////////////////////////////////////////////////////////////////

        void attack(const std::string &target);
        void takeDamage(uint32_t amount);
        void beRepaired(uint32_t amount);

    private:
        uint32_t _hitPoints;
        uint32_t _energyPoints;
        uint32_t _attackDamage;
};

#endif