/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongWRONGCAT.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/17 15:29:15 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/04/17 18:57:41 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& other);
		~WrongCat(void);

		WrongCat &operator=(const WrongCat& other);

		////////////////////////////////////////////////////////////////////////
		
		void makeSound() const;
};

#endif