/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/05/16 15:56:59 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

int32_t	error_message(std::string error)
{
	std::cout << error << std::endl;
	return (1);
}

int32_t main(int argc, char *argv[])
{
	Harl	harl;
	
	if (argc != 2)
		return (error_message("Error: you did not enter the right amount of arguments"));
	harl.complain(argv[1]);
	return (0);
}