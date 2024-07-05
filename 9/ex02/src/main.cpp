/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2024/07/02 12:59:32 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PMergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Expected a string" << std::endl;
		return (1);
	}

	PMergeMe rpn(argv[1]);

	rpn.sort();

	rpn.output();

	return (0);
}
