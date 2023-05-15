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

		Bureaucrat &operator=(const Bureaucrat& other);

		//////////////////////////////////////////////////////////////////////////////

		const std::string getName();
		uint32_t getGrade();

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
};

#endif