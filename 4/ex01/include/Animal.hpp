/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/04/24 21:36:47 by rubennijhui   ########   odam.nl         */
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
		virtual void makeSound() const;

	protected:
		Brain _brain;
		std::string _type;
};

#endif