#include "Form.hpp"

Form::Form(const std::string &name, bool signed_, const int gradeSigned, const int gradeExecuted) :
		   _name(name), _signed(signed_), _gradeSigned(gradeSigned), _gradeExecuted(gradeExecuted)
{
	checkGrades();
}

Form::Form(const std::string &name, const int gradeSigned, const int gradeExecuted)
		: _name(name), _signed(false), _gradeSigned(gradeSigned), _gradeExecuted(gradeExecuted)
{
	checkGrades();
}

void Form::checkGrades()
{
	if (_gradeExecuted > LOW_GRADE || _gradeExecuted < HIGHT_GRADE
		|| _gradeSigned > LOW_GRADE || _gradeSigned < HIGHT_GRADE)
		std::cout << "Form creation failed: ";
	if (_gradeExecuted > LOW_GRADE || _gradeSigned > LOW_GRADE)
		throw Bureaucrat::GradeTooLowException("Grade exceeds the valid value");
	else if (_gradeExecuted < HIGHT_GRADE || _gradeSigned < HIGHT_GRADE)
		throw Bureaucrat::GradeTooHighException("Grade less than the valid value");
	std::cout << "Form " + _name + " created" << std::endl;
}

const std::string &Form::getName() const
{
	return _name;
}

bool Form::isSigned() const
{
	return _signed;
}

int Form::getGradeSigned() const
{
	return _gradeSigned;
}

int Form::getGradeExecuted() const
{
	return _gradeExecuted;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if ((int)bureaucrat.getGrade() <= _gradeSigned)
		_signed = true;
	else
	{
		std::cout << "Try to sign form " + _name + " failed!" << std::endl;
		throw Bureaucrat::GradeTooHighException(bureaucrat.getName() + "'s grade less than the form required");
	}
}

Form::~Form()
{
	std::cout << "Form " + _name + " destructed" << std::endl;
}

Form::Form(const Form &other) :
	_name(other.getName()) , _signed(other.isSigned()), _gradeSigned(other.getGradeSigned()),
	_gradeExecuted(other.getGradeExecuted())
{}

Form &Form::operator=(const Form &other)
{
	const_cast<std::string &>(_name) = other.getName();
	const_cast<int &>(_gradeSigned) = other.getGradeSigned();
	const_cast<int &>(_gradeExecuted) = other.getGradeExecuted();
	_signed = other.isSigned();
	return *this;
}

void Form::setSigned(bool signed_)
{
	_signed = signed_;
}

Form::Form() : _gradeSigned(LOW_GRADE), _gradeExecuted(LOW_GRADE)
{}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Form: { _name: " << form.getName() << "; _signed: " << form.isSigned()
		<< "; _gradeSigned: " << form.getGradeSigned() << "; _gradeExecuted: "
		<< form.getGradeExecuted() << " }";
	return os;
}


// --------------------------Form::FormNotSignedException------------------------------
Form::FormNotSignedException::FormNotSignedException(const std::string &errmsg)
	: _errmsg(errmsg)
{}

const char *Form::FormNotSignedException::what() const throw()
{
	return ("FormNotSignedException: " + _errmsg).c_str();
}
