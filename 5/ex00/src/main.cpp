/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/05/15 13:41:08 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bb("BITCH", 150);
	Bureaucrat aa;

	aa = bb;

	std::cout << aa.getName() << std::endl;
	std::cout << aa.getGrade() << std::endl;

	return 0;
}
