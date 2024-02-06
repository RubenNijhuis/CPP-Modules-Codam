#include "Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>

Bureaucrat::Bureaucrat(void): _name("default"), _grade(150)
{
	std::cout << "Bureaucrat created with an empty constructor" << std::endl;

	return;
}

Bureaucrat::Bureaucrat(std::string name, uint32_t grade): _name(name)
{
	std::cout << "Bureaucrat created with the name and grade constructor" << std::endl;

	this->setGrade(grade);

	return;
}

Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150)
{
	std::cout << "Bureaucrat created with the name constructor" << std::endl;

	return;
}

Bureaucrat::Bureaucrat(uint32_t grade): _name("default")
{
	std::cout << "Bureaucrat created with the name constructor" << std::endl;

	this->setGrade(grade);

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

std::ostream& operator<<(std::ostream &ostr, Bureaucrat& instance)
{
	ostr << "Bureaucrat " << instance.getName() << ", bureaucrat grade" << instance.getGrade();
	return (ostr);
}

// ---------------------- Member functions -------------------------------------

void Bureaucrat::setGrade(uint32_t grade)
{
	if (grade == 0)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}

	this->_grade = grade;
}

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

uint32_t Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	this->setGrade(this->_grade--);
}

void Bureaucrat::decrementGrade()
{
	this->setGrade(this->_grade++);
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat " << this->_name << " with a grade " << this->_grade << " succesfully signs " << form << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat " << this->_name << " with a grade " << this->_grade << " cannot sign " << form << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form){
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " because "\
		<< e.what() << std::endl;
	}
}


// ---------------------- BureaucratException Functions ------------------------

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Cannot get a grade > 150!");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Cannot get a grade < 1!");
};
