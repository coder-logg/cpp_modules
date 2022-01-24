#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _gradeSigned;
	const int _gradeExecuted;
	void checkGrades();

public:
	Form(const std::string &name, int gradeSigned, int gradeExecuted);
	Form(const std::string &name, bool _signed, int gradeSigned, int gradeExecuted);
	const std::string &getName() const;
	~Form();
	Form(const Form &other);
	Form &operator=(const Form &other);
	bool isSigned() const;
	int getGradeSigned() const;
	int getGradeExecuted() const;
	void beSigned(Bureaucrat &bureaucrat);

};
std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //FORM_HPP
