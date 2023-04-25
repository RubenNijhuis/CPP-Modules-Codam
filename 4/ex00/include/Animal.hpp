/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 13:10:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/04/17 18:29:13 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

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

		std::string getType() const;
		virtual void makeSound() const;

	protected:
		std::string _type;
};

#endif