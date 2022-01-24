#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <string>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
public:
	ShrubberyCreationForm();
	virtual ~ShrubberyCreationForm(){};
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	explicit ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm &other);
	const std::string &getTarget() const;
	void setTarget(const std::string &target);
	void execute(const Bureaucrat &executor) const;
};

#endif //SHRUBBERYCREATIONFORM_HPP
