#include "RobotomyRequestForm.hpp"
#include "../ex03/RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", 72, 45)
{}

const std::string &RobotomyRequestForm::getTarget() const
{
	return _target;
}

void RobotomyRequestForm::setTarget(const std::string &target)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
: Form("RobotomyRequestForm", 72, 45), _target(other.getTarget())
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	setSigned(other.isSigned());
	_target = other.getTarget();
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!isSigned())
		throw Form::FormNotSignedException(getName() + " can't be executed because it isn't signed");
	if ((int)executor.getGrade() > getGradeExecuted())
		throw Bureaucrat::GradeTooLowException(executor.getName() + "'s grade less than the form required");
	if (_target.empty())
		std::cout << "WARNING: form target isn't specified!" << std::endl;
	std::cout << '\a' << std::flush;
	std::srand(std::time(nullptr));
	if (std::rand() % 2)
		std::cout << _target + " has been robotomized successfully." << std::endl;
	else
		std::cout << _target + " has been NOT robotic successfully" << std::endl;
}

