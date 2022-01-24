#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm(const PresidentialPardonForm &other);
	explicit PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm();
	~PresidentialPardonForm();
	const std::string &getTarget() const;
	void setTarget(const std::string &target);
	void execute(const Bureaucrat &executor) const ;
};


#endif //PRESIDENTIALPARDONFORM_HPP
