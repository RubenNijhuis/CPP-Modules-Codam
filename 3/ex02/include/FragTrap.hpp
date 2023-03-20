/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/19 16:33:24 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

# include <string>
# include <stdint.h>

class FragTrap : public ClapTrap
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
		std::string _name;
};

#endif