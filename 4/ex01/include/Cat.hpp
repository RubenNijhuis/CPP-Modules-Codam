/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 15:29:15 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/05/08 11:30:32 by rubennijhui   ########   odam.nl         */
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
		Brain *getBrain() const;

	private:
		Brain* _brain;
};

#endif