/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 19:41:22 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/05/10 17:57:51 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	private:
		int					index;
		static std::string	fields_name[5];
		std::string			information[5];

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
		bool	setInformation(void);
};

#endif
