#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "AForm.hpp"

#include <string>
#include <stdexcept>

class AForm;

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

		const std::string getName() const;
		uint32_t getGrade() const;

		void incrementGrade();
		void decrementGrade();
		void signForm(AForm &form);

		void executeForm(AForm const & form);

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
		void setGrade(uint32_t grade);
		const std::string _name;
		uint32_t _grade;
};

std::ostream& operator<<(std::ostream &ostr, Bureaucrat &instance);

#endif