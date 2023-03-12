/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/12 12:51:02 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

# include <string>
# include <stdint.h>
# include <string>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(const ScavTrap& other);
        ScavTrap(const std::string name);
        ~ScavTrap(void);

        ScavTrap &operator=(const ScavTrap& other);

        ////////////////////////////////////////////////////////////////////////

        void attack(const std::string& target);
        void guardGate(void);

        ////////////////////////////////////////////////////////////////////////

        void setName(std::string name);
        std::string getName() const;

    private:
        std::string _name;
};

#endif