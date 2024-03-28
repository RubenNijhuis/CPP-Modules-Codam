/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/22 17:36:15 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/27 13:36:13 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// With help and love from Jisse Meruma 
// https://github.com/Jisse-Meruma

#include "MutantStack.hpp"
#include <list>

int main()
{
	{
		MutantStack<int> mstack;

		// Fill the stack
		for (int i = 0; i < 10; i++) mstack.push(i);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator itEnd = mstack.end();

		++it;
		--it;
		
		// Print the stack
		while (it != itEnd)
		{
			std::cout << *it << " ";
			++it;
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
	
	{
		// Using a constant stack
		const MutantStack<int> const_mstack;

		const MutantStack<int>::const_iterator constItBegin = const_mstack.begin();
		const MutantStack<int>::const_iterator constItEnd = const_mstack.end();

		for (int i = 0; i < 10; i++) const_mstack.push(i);
		

		// // Added the list version to compare my list with. some lil things are other way around because we are using the stack!
		// std::list<int> s;

		// s.push_back(5);
		// s.push_back(17);

		// std::cout << "top-ish: " << s.back() << std::endl;

		// s.pop_back();

		// std::cout << "s-size: " << s.size() << std::endl;

		// s.push_back(3);
		// s.push_back(5);
		// s.push_back(737);
		// s.push_back(0);

		// std::list<int>::iterator it = s.begin();
		// std::list<int>::iterator ite = s.end();

		// ++it;
		// --it;

		// while (it != ite)
		// {
		// 	std::cout << "s: " << *it << std::endl;
		// 	++it;
		// }
	}
	return 0;
}