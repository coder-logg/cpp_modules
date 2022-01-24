#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm", 25, 5)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!isSigned())
		throw Form::FormNotSignedException(getName() + " can't be executed because it isn't signed");
	if ((int)executor.getGrade() > getGradeExecuted())
		throw Bureaucrat::GradeTooLowException(
			executor.getName() + "'s grade less than the form required");
	if (_target.empty())
		std::cout << "WARNING: form target isn't specified!" << std::endl;
	std::cout <<  _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: Form(other), _target(other.getTarget())
{}

Form *PresidentialPardonForm::clone() const
{
	return new PresidentialPardonForm(*this);
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return _target;
}

void PresidentialPardonForm::setTarget(const std::string &target)
{
	_target = target;
}
