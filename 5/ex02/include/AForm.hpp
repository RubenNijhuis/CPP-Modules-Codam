/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 10:53:54 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/06 16:18:36 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(void);
		AForm(std::string name, uint32_t signGrade, uint32_t executeGrade);
		AForm(const AForm& other);

		AForm &operator=(const AForm& other);

		virtual ~AForm();
		//////////////////////////////////////////////////////////////////////////////

		// Getters
		std::string getName() const;
		uint32_t	getSignGrade() const;
		uint32_t	getExecuteGrade() const;

		void		setSigned(bool isSigned);
		bool		getIsSigned() const;

		// Methods
		void		beSigned(Bureaucrat const &bureacrat);
		virtual void execute(Bureaucrat const &executor) const = 0;

		// Exceptions
		class GradeTooLowException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};

		class FormNotSigned : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};


	private:
		const std::string _name;
		const uint32_t _signGrade;
		const uint32_t _executeGrade;
		bool _isSigned;
};

std::ostream& operator<<(std::ostream &ostr, AForm &instance);


#endif