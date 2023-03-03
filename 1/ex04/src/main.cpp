/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 22:44:38 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/03/02 13:04:23 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>

#include "Sed.hpp"

bool	check_inputs(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed <file_path> \"original_text\" \"new_text\"" << std::endl;
		return (false);
	}
	else if (strlen(argv[1]) == 0 || strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
	{
		std::cout << "Error: input arguments may not be empty" << std::endl;
		return (false);
	}
	return (true);
}

int	main(int argc, char *argv[])
{
	if (check_inputs(argc, argv) == false)
		return (1);

	// Setup class instance
	Sed	sed(argv[2], argv[3]);

	// Check if files can be opened/created
	if (sed.check_files(argv[1]))
		return (1);
	
	// Action
	sed.replace();
	sed.output_to_file();

	return (0);
}
