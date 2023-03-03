/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 16:56:42 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/03/02 13:03:32 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		for (int curr_arg = 1; curr_arg < argc; curr_arg++) 
		{
			size_t len = strlen(argv[curr_arg]);
			for (size_t letter = 0; letter < len; letter++)
			{
				char transformed_char = toupper(argv[curr_arg][letter]);
				std::cout << transformed_char;
			}
		}
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << '\n';
	return (0);
}
