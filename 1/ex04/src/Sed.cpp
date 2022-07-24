/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 21:21:58 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/07/24 22:44:34 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Sed.hpp"

Sed::Sed(std::string s1, std::string s2): _original_str(s1), _replace_str(s2)
{
}

bool	Sed::check_files(std::string filename)
{
	if (!this->_file.is_open())
	{
		this->_file.close();
	}

	this->_file.open(filename);

	if (!this->_file.is_open())
	{
		std::cout << "It is not possible to open the file" << std::endl;
		return (1);
	}

	if (_file.fail())
	{
		std::cout << "The filename is not correct" << std::endl;
		return (1);
	}

	this->_filename = filename;

	return (0);
}

void	Sed::replace(void)
{
	std::string	newStr;
	size_t		original_str_len;
	
	original_str_len = _original_str.length();

	newStr.assign(
		std::istreambuf_iterator<char>(this->_file),
		std::istreambuf_iterator<char>()
	);

	for (size_t i = 0; i < newStr.length(); i++)
	{
		if (newStr.compare(i, original_str_len, this->_original_str) == 0)
		{
			newStr.erase(i, original_str_len);
			newStr.insert(i, this->_replace_str);
		}
	}

	this->_replaced_content = newStr;
}

void	Sed::output_to_file(void)
{
	std::ofstream	streamNewFile;
	std::string		newFilename;

	newFilename = this->_filename;
	newFilename += ".replace";

	streamNewFile.open(newFilename);
	streamNewFile << this->_replaced_content;
}