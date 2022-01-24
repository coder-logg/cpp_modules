#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#define LOW_GRADE 150
#define HIGHT_GRADE 1
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	unsigned _grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat & operator =(const Bureaucrat & other);
	const std::string &getName() const;
	unsigned int getGrade() const;
	void increaseGrade();
	void downGrade();
	void signForm(Form &form);
	~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
		private:
			std::string _errmsg;
		public:
			explicit GradeTooHighException(const std::string &errmsg);
			~GradeTooHighException() throw();
			const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		private:
			std::string _errmsg;
		public:
			explicit GradeTooLowException(const std::string &errmsg);
			~GradeTooLowException() throw();
			const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);


#endif //BUREAUCRAT_HPP
