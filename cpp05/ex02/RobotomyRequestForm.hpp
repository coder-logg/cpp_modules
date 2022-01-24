#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <string>

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm();
	virtual ~RobotomyRequestForm(){};
	RobotomyRequestForm(const RobotomyRequestForm &other);
	explicit RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm & operator=(const RobotomyRequestForm &other);
	const std::string &getTarget() const;
	void setTarget(const std::string &target);
	void execute(const Bureaucrat &executor) const;
};


#endif //ROBOTOMYREQUESTFORM_HPP
