/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 10:53:54 by rubennijhui   #+#    #+#                 */
/*   Updated: 2023/05/17 11:13:05 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string name);
		Form(std::string name, uint32_t signGrade);
		Form(std::string name, uint32_t signGrade, uint32_t executeGrade);
		Form(const Form& other);
		~Form(void);

		Form &operator=(const Form& other);

		//////////////////////////////////////////////////////////////////////////////

		std::string getName();
		uint32_t	getSignGrade();
		uint32_t	getExecuteGrade();
		bool		getIsSigned();
		void		beSigned(Bureaucrat &bureacrat);

		class GradeTooLowException : public std::exception
		{
		public:
			virtual const char *except() const throw();
		};


	private:
		const std::string _name;
		const uint32_t _signGrade;
		const uint32_t _executeGrade;
		bool _isSigned;
};

std::ostream& operator<<(std::ostream &ostr, Form &instance);


#endif