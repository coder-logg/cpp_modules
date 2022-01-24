#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Vladimir Putin"), _grade(HIGHT_GRADE)
{
	std::cout << "Was called Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade > LOW_GRADE || grade < HIGHT_GRADE)
		std::cout << "Bureaucrat creation failed: ";
	if (grade > LOW_GRADE)
		throw Bureaucrat::GradeTooLowException("Grade exceeds the valid value");
	else if (grade < HIGHT_GRADE)
		throw Bureaucrat::GradeTooHighException("Grade less than the valid value");
	_grade = grade;
	std::cout << "Created bureaucrat " + _name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	const_cast<std::string&>(this->_name) = other._name;
	_grade = other._grade;
}

const std::string &Bureaucrat::getName() const { return _name; }

void Bureaucrat::increaseGrade()
{
	_grade--;
	if (_grade < HIGHT_GRADE)
		throw GradeTooHighException("Grade increase exception");
}

void Bureaucrat::downGrade()
{
	_grade++;
	if (_grade > LOW_GRADE)
		throw GradeTooLowException("Grade exceeds the valid value");
}

void Bureaucrat::signForm(Form &f)
{
	if (f.isSigned() == true)
		std::cerr << "Bureaucrat " << _name << " cannot sign form " << f.getName() << " because: it's is signed" << std::endl;
	else
	{
		try
		{
			f.beSigned(*this);
			std::cout << _name << " signs " << f.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << _name << " can not sign form " << f.getName() << " because: ";
			std::cout << e.what() << std::endl;
		}
	}
}

unsigned int Bureaucrat::getGrade() const { return _grade; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return (*this);
	const_cast<std::string&>(_name) = other.getName();
	_grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " + _name + " destructed" << std::endl;
}

// ------------------Bureaucrat::GradeTooHighException---------------------
Bureaucrat::GradeTooHighException::GradeTooHighException
(const std::string &errmsg) : _errmsg(errmsg) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return (std::string("GradeTooHighException: " + _errmsg)).c_str();
}

// ------------------Bureaucrat::GradeTooLowException---------------------
Bureaucrat::GradeTooLowException::GradeTooLowException
		(const std::string &errmsg) : _errmsg(errmsg) {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return (std::string("GradeTooLowException: " + _errmsg)).c_str();
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade();
	return os;
}