#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"

#include <string>
#include <stdexcept>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(uint32_t grade);
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, uint32_t grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat(void);

		//////////////////////////////////////////////////////////////////////////////

		Bureaucrat &operator=(const Bureaucrat& other);

		//////////////////////////////////////////////////////////////////////////////

		const std::string getName();
		uint32_t getGrade();

		void incrementGrade();
		void decrementGrade();
		void signForm(Form &form);

		//////////////////////////////////////////////////////////////////////////////

		class GradeTooLowException : public std::exception
		{
		public:
			virtual const char *except() const throw();
		};

		class GradeTooHighException : public std::exception
		{
		public:
			virtual const char *except() const throw();
		};

	private:
		void setGrade(uint32_t grade);
		const std::string _name;
		uint32_t _grade;
};

std::ostream& operator<<(std::ostream &ostr, Bureaucrat &instance);

#endif