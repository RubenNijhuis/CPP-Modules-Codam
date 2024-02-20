/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 14:15:53 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/07 14:28:13 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, uint32_t grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat(void);

		//////////////////////////////////////////////////////////////////////////////

		Bureaucrat &operator=(const Bureaucrat& other);

		//////////////////////////////////////////////////////////////////////////////

		const std::string getName() const;
		uint32_t getGrade() const;

		void incrementGrade();
		void decrementGrade();

		//////////////////////////////////////////////////////////////////////////////

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

	private:
		const std::string _name;
		uint32_t _grade;

		// Methods
		void setGrade(uint32_t grade);
};

std::ostream& operator<<(std::ostream &ostr, Bureaucrat &instance);

#endif