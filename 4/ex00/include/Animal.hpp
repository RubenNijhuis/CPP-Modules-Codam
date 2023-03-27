/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/24 15:24:32 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <stdint.h>
# include <string>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal& other);
		Animal(const std::string& type);
		~Animal(void);

		Animal &operator=(const Animal& other);

		////////////////////////////////////////////////////////////////////////

	protected:
		std::string _type;
};

#endif