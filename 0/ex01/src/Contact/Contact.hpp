/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 19:41:22 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/03/02 13:03:32 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	private:
		uint			index;
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
		void	displayAllData(void);
		void	displayCompactData(void);
		bool	setInformation(uint index);
		void	setIndex(uint index);
};

#endif
