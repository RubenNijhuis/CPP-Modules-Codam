/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/11 10:35:14 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/05/11 10:35:35 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon(std::string weapon);
		~Weapon(void);
		const std::string&	getType();
		void				setType( const std::string& type );
};

#endif