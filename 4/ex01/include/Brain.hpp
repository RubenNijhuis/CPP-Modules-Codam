/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/19 23:19:58 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/04/23 19:11:04 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain& other);
		~Brain(void);

		Brain &operator=(const Brain& other);

	private:
		std::string _ideas[100];
};

#endif