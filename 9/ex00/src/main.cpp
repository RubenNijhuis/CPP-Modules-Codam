/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2024/02/19 17:28:51 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;

	std::cout << "a: " << a << " b: " << b << std::endl;
	::swap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "min: " << ::min(a, b) << std::endl;
	std::cout << "max: " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c: " << c << " d: " << d << std::endl;
	::swap(c, d);
	std::cout << "c: " << c << " d: " << d << std::endl;
	std::cout << "min: " << ::min(c, d) << std::endl;
	std::cout << "max: " << ::max(c, d) << std::endl;

	return (0);
}
