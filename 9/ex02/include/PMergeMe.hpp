/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PMergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2024/07/02 12:58:06 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <vector>

class PMergeMe
{
public:
	PMergeMe(std::string number);
	~PMergeMe();

	void sort();
	std::vector<int> merge_insertion_sort(std::vector<int> numbers);
	void output();

private:
	PMergeMe();

private:
	std::vector<int> _numbers;
};
