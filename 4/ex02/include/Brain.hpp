/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/19 23:19:58 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/05/08 11:22:21 by rubennijhui   ########   odam.nl         */
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

		void setIdea(uint32_t index, std::string idea);
		std::string getIdea(uint32_t index);

	private:
		std::string _ideas[100];
};

#endif