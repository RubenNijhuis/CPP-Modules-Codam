/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 17:26:26 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/12 21:30:15 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		amount;

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(void);
		void	searchContact(void);
};

#endif