#include "Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>

Bureaucrat::Bureaucrat(void): _name("default"), _grade(150)
{
	std::cout << "Bureaucrat created with an empty construcor" << std::endl;

	return;
}

Bureaucrat::Bureaucrat(std::string name, uint32_t grade): _name(name)
{
	std::cout << "Bureaucrat created with the grade constructor" << std::endl;

	if (grade == 0)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooHighException();
	}

	this->_grade = grade;

	return;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << this->_name << " deconstructed" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	std::cout << "Bureaucrat created by copy" << std::endl;
	*this = other;
	return;
}

// ---------------------- Operator overloads -----------------------------------

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat created by assignment" << std::endl;

	if (this != &other)
	{
		this->_grade = other._grade;
	}

	return (*this);
}

// ---------------------- Operator overloads -----------------------------------

const std::string Bureaucrat::getName()
{
	return (this->_name);
}

uint32_t Bureaucrat::getGrade()
{
	return (this->_grade);
}

// ---------------------- BureaucratException Functions -----------------------

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Cannot get a grade > 150!");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Cannot get a grade < 1!");
};