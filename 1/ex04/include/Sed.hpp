/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 21:22:35 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/07/24 22:44:18 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <string>
#include <fstream>

class Sed
{
	private:
		std::ifstream	_file;
		std::string		_filename;

		std::string		_original_str;
		std::string		_replace_str;

		std::string		_replaced_content;

	public:
		Sed(std::string original_str, std::string replace_str);

		bool	check_files(std::string filename);
		void	replace(void);
		void	output(void);
};

#endif