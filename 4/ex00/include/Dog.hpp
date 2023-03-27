/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/24 15:41:49 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog& other);
		Dog(const std::string& type);
		~Dog(void);

		Dog &operator=(const Dog& other);
};

#endif