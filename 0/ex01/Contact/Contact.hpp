/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 19:41:22 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/12 21:24:11 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	private:
		char	*first_name;
		char	*last_name;
		char	*nick_name;
		char	*phone_number;
		char	*darkest_secret;

	public:
		Contact(void);
		~Contact(void);
		void displayData(void);
};

#endif
