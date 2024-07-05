/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PMergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2024/07/02 13:15:02 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"
#include <string>
#include <iostream>

PMergeMe::PMergeMe(std::string numbers)
{
	// parse the string and store the numbers in the vector
	std::string number;
	for (std::string::iterator it = numbers.begin(); it != numbers.end(); ++it)
	{
		char c = *it;
		if (std::isdigit(c))
		{
			number += c;
		}
		else if (!number.empty())
		{
			_numbers.push_back(std::atoi(number.c_str()));
			number.clear();
		}
	}

	if (!number.empty())
	{
		_numbers.push_back(std::atoi(number.c_str()));
	}
}

PMergeMe::~PMergeMe()
{
}

PMergeMe::PMergeMe()
{
}

////////////////////////////////////////////////////////////////////////////////

// This function performs merge sort using insertion sort as a base case
std::vector<int> PMergeMe::merge_insertion_sort(std::vector<int> numbers)
{
	// Base case: if the vector has 1 or fewer elements, it is already sorted
	if (numbers.size() <= 1)
	{
		return numbers;
	}

	// Split the vector into two halves
	std::vector<int> left;
	std::vector<int> right;

	// Iterate through the numbers and divide them into left and right halves
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
	{
		// If the current index is less than half the size of the vector, add the number to the left half
		if (it - numbers.begin() < static_cast<std::vector<int>::difference_type>(numbers.size() / 2))
		{
			left.push_back(*it);
		}
		// Otherwise, add the number to the right half
		else
		{
			right.push_back(*it);
		}
	}

	// Recursively sort the left and right halves
	left = merge_insertion_sort(left);
	right = merge_insertion_sort(right);

	// Merge the sorted left and right halves
	std::vector<int> result;
	std::vector<int>::iterator l = left.begin();
	std::vector<int>::iterator r = right.begin();

	// Compare the elements from the left and right halves and add the smaller element to the result vector
	while (l != left.end() && r != right.end())
	{
		if (*l < *r)
		{
			result.push_back(*l);
			++l;
		}
		else
		{
			result.push_back(*r);
			++r;
		}
	}

	// Add any remaining elements from the left half to the result vector
	while (l != left.end())
	{
		result.push_back(*l);
		++l;
	}

	// Add any remaining elements from the right half to the result vector
	while (r != right.end())
	{
		result.push_back(*r);
		++r;
	}

	// Return the sorted result vector
	return result;
}

void PMergeMe::sort()
{
	_numbers = merge_insertion_sort(_numbers);
}

void PMergeMe::output()
{
	for (std::vector<int>::iterator it = _numbers.begin(); it != _numbers.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

////////////////////////////////////////////////////////////////////////////////