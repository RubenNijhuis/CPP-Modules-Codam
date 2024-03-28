/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 09:52:22 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/22 21:16:59 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <iostream>
#include <string>
#include <stack>
#include <deque>

template <typename T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container> 
{
	public:
		MutantStack()
		{
			std::cout << "Default MutantStack constructor called" << std::endl;
		};

		MutantStack(const MutantStack& src) : std::stack<T, Container>(src)
		{
			std::cout << "Copy MutantStack constructor called" << std::endl;
		};
		
		~MutantStack()
		{
			std::cout << "MutantStack destructor called" << std::endl;
		};

		MutantStack& operator=(const MutantStack& oth)
		{
			if (this != &oth)
			{
				this->c = oth.c;
			}
			return *this;
		};

		////////////////////////////////////////////////////////////////////////////
		
		typedef typename Container::iterator 					iterator;
		typedef typename Container::const_iterator				const_iterator;
		typedef typename Container::reverse_iterator			reverse_iterator;
		typedef typename Container::const_reverse_iterator		const_reverse_iterator;

		////////////////////////////////////////////////////////////////////////////
		
    	iterator begin(void)
    	{
    	    return  this->c.begin();
    	}
	
    	iterator end(void)
    	{
    	    return this->c.end();
    	}
	
    	reverse_iterator rbegin(void)
    	{
    	    return this->c.rbegin();
    	}
	
    	reverse_iterator rend(void)
    	{
    	    return this->c.rend();
    	}
	
    	const const_iterator cbegin(void) const
    	{
    	    return this->c.cbegin();
    	}
	
    	const const_iterator cend(void) const
    	{
    	    return this->c.cend();
    	}
	
    	const const_reverse_iterator crend(void) const
    	{
    	    return this->c.crend();
    	}
	
    	const const_reverse_iterator crbegin(void) const
    	{
    	    return this->c.crbegin();
    	}
};

#endif