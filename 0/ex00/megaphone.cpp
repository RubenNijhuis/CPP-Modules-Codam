/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 16:56:42 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/12 18:38:07 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int j = 1; j < argc; j++) 
		{
			for (int i = 0; i < (int)strlen(argv[j]); i++)
			{
				std::cout << (char)toupper(argv[j][i]);
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
	return 0;
}
