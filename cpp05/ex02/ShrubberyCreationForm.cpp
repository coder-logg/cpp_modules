#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreationForm", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("ShrubberyCreationForm", 145, 137), _target(target)
{}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void ShrubberyCreationForm::setTarget(const std::string &target)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
: Form("ShrubberyCreationForm", 145, 137), _target(other.getTarget())
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	setSigned(other.isSigned());
	_target = other.getTarget();
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!isSigned())
		throw Form::FormNotSignedException(getName() + " can't be executed because it isn't signed");
	if ((int)executor.getGrade() > getGradeExecuted())
		throw Bureaucrat::GradeTooLowException(executor.getName() + "'s grade less than the form required");
	if (_target.empty())
		std::cout << "WARNING: form target isn't specified!" << std::endl;
	std::ofstream out(_target + "_shrubbery");
	out << "                         --********---                        " << std::endl;
	out << "                        *--        --**-                      " << std::endl;
	out << "                --------*-             ---*-                  " << std::endl;
	out << "             -**---                        -*-                " << std::endl;
	out << "           -*--                          --**--               " << std::endl;
	out << "         -**-            -      --         ----***-           " << std::endl;
	out << "         -*-            ------ -*-               --*--        " << std::endl;
	out << "         -*                 ----                   -*---      " << std::endl;
	out << "      -*--                          -- -*--**-   ---*--*      " << std::endl;
	out << "     -*-                             ----      ----****--     " << std::endl;
	out << "     -*-                ------                         -**--  " << std::endl;
	out << "  -------*--*--  ---*-    ------       -----  --         -**  " << std::endl;
	out << "-*-           -------   --***--***-------*-***--         -**  " << std::endl;
	out << "*-   --- --- --*--**--*****-**- -**---*****---***-***-- -**-  " << std::endl;
	out << "*-     -----******--*--***-    --**********-- -------****-    " << std::endl;
	out << "-************-- --*-**--**    *-*-----*********------         " << std::endl;
	out << "           --**-- -*- --      *- -**--                        " << std::endl;
	out << "                   -**-**--  -*---                            " << std::endl;
	out << "                       **-    -***-                           " << std::endl;
	out << "                     --*-   -****-                            " << std::endl;
	out << "                     -**    ---*-                             " << std::endl;
	out << "                    -**-    --*-                              " << std::endl;
	out << "                 -**--     -*--                               " << std::endl;
	out << "          ---*****--*-   --**-**---                           " << std::endl;
	out << "       --***-**--***------***-***--**-                        " << std::endl;
	out << " ----**----   --**--**---**--**-  ----*------                 " << std::endl;
	out << "---       --*****--***-    --****-        ---**--             " << std::endl;
	out << "                            ----*-                            " << std::endl;
	out.close();
}

