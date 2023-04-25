/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 15:29:15 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/04/24 21:31:00 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>

# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);

		Cat &operator=(const Cat& other);

		////////////////////////////////////////////////////////////////////////
		
		void makeSound() const;

	private:
		Brain* brain;
};

#endif