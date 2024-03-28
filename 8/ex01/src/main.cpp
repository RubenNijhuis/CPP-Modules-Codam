/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/22 14:33:56 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/22 15:18:26 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(100);

	Span s(vec.size());

    try // Failes and it caught
    {
        s.addNumber(10);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

	try
	{
		s.addRange(vec.begin(), vec.end());
		std::cout << "Shortest " << s.shortestSpan() << std::endl;
		std::cout << "Longest  " << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// try
	// {
	// 	Span a;
	// 	a.AddRange(vec.begin(), vec.end());
	// 	std::cout << "short " << a.shortestSpan() << std::endl;
	// 	std::cout << "long " << a.longestSpan() << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
}