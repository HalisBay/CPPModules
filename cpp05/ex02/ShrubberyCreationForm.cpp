#include "ShrubberyCreationForm.hpp"
#include <iomanip>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Default Shrub Form", 145, 137)
{
	this->_target = "Default";
	std::cout << "Shrubbery Default Const Called"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Parameter Shrub Form", 145, 137)
{
	this->_target = target;
	std::cout << "Shrubbery Parameter Const Called"<< std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << *this <<" was destroyed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy)
{
    *this = cpy;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & other)
{
	this->_target = other.getTarget();
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	Atree = 
"        * \n"
"       *** \n"
"      ***** \n"
"     ******* \n"
"    ********* \n"
"   *********** \n"
"        #       \n"
"        #       \n"
"        #       \n"
"        #       \n";
	if (this->getSigned() == 0)
		throw (Form::SignException());
	else if (executor.getGradeNote() > this->getGradeToExecute())
		throw (Form::GradeTooLowException());
	else
	{
		std::ofstream	ofs(this->_target);
		if (!ofs.is_open())
		{
			std::cout << "file cannot open" << std::endl;
			return ;
		}
		ofs << Atree;
	}
}