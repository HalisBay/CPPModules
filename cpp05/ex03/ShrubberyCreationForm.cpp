#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default Shrub Form", 145, 137)
{
		this->_target = "Default";
		std::cout << "Shrubbery Default Const Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Parameter Shrub Form", 145, 137)
{
		this->_target = target;
		std::cout << "Shrubbery Parameter Const Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
		std::cout << *this << " was destroyed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : AForm(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExecute())
{
		*this = cpy; 
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
		this->_target = other._target; 
		return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
		return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
		std::string Atree =
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

		if (!this->getSigned())
		{
				throw AForm::SignException();
		}
		else if (executor.getGrade() > this->getGradeToExecute())
		{
				throw AForm::GradeTooLowException();
		}
		else
		{
				std::ofstream ofs(this->_target.c_str()); 
				if (!ofs.is_open())
				{
						std::cout << "Cannot open file: " << this->_target << std::endl;
						return;
				}
				ofs << Atree;
				ofs.close(); 
				std::cout << "Shrubbery successfully created in " << this->_target << std::endl;
		}
}
