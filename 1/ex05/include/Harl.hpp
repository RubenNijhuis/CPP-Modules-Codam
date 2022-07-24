/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/11 10:33:08 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/05/16 23:45:20 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <string>

class Harl
{
	private:
		std::string	level;

	public:
		Harl(void);
		~Harl(void);

		uint32_t	Harl::getComplainmentLevel(std::string level);
		void		complain(std::string level);
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
};

#endif