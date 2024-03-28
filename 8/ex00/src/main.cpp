/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/22 13:14:48 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/22 14:32:56 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"
#include <iostream>
#include <vector>

int main(void)
{
    int32_t find = 11;
    
    std::vector<int> vec;

	for (int i = 0; i < 10; i++) vec.push_back(i);	

    try
    {
        std::cout << *easyfind(vec, find) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}