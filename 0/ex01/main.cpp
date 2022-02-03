/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 21:34:55 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/02/03 08:36:02 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_contact
{
	char	*first_name;
	char	*last_name;
	char	*nick_name;
	char	*phone_number;
	char	*darkest_secret;
} t_contact;

class PhoneBook
{
	Contact contacts[8];

	void add_contact() // adds contact but if contact_count > 8 discard oldest contact and add newest
	void search_contact() // searches contact and outputs
	
}

// Contact data
// first name - last name - nickname - phone number - darkest secret || No empty fields allowed
class Contact
{
	char	*first_name;
	char	*last_name;
	char	*nick_name;
	char	*phone_number;
	char	*darkest_secret;
	int		time_added;
}

int	main(int argc, char **argv)
{
	PhoneBook phonebook;

	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	output_to_uppercase(argv + 1);
	return 0;
}