/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/11 10:33:08 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/07/26 13:52:52 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <string>

class Harl
{
	private:
		int32_t	_level;

		int32_t	getComplainmentLevel(std::string level);
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);

	public:
		Harl(void);
		~Harl(void);
		void		complain(std::string level);
};

#endif