/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/02 13:03:32 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *sp = &str;
	std::string &sr = str;

	std::cout << "addr:        " << &str << std::endl;
	std::cout << "pointer:     " << sp << std::endl;
	std::cout << "addr of ref: " << &sr << std::endl;

	std::cout << std::endl;

	std::cout << "string:        " << str << std::endl;
	std::cout << "deref pointer: " << *sp << std::endl;
	std::cout << "reference:     " << sr << std::endl;

	return (0);
}