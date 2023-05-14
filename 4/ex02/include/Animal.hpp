/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/05/12 14:13:44 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include "Brain.hpp"

class Animal
{
	public:
		Animal(void);
		Animal(const Animal& other);
		Animal(const std::string& type);
		virtual ~Animal(void);

		Animal &operator=(const Animal& other);

		////////////////////////////////////////////////////////////////////////

		std::string getType() const;
		virtual void makeSound() const = 0;

	protected:
		std::string _type;
};

#endif