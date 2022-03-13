/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 19:41:22 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/13 10:36:05 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	private:
		int					index;
		static std::string	fields_name[5];
		std::string			informations[5];

		enum Field {
			FirstName,
			LastName,
			Nickname,
			Phone,
			Secret
		};

	public:
		Contact(void);
		~Contact(void);
		void	displayData(void);
		void	setInformation(void);
};

#endif
