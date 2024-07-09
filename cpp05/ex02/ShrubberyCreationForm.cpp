#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Default Shrub Form", 145, 137)
{
		this->_target = "Default";
		std::cout << "Shrubbery Default Const Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Parameter Shrub Form", 145, 137)
{
		this->_target = target;
		std::cout << "Shrubbery Parameter Const Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
		std::cout << *this << " was destroyed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExecute())
{
		*this = cpy; // Dikkat: Burada derin kopyalama yapılacaksa özel bir işlem yapılmalı.
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
		this->_target = other._target; // Sadece _target alanını kopyalıyoruz.
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
				throw Form::SignException();
		}
		else if (executor.getGradeNote() > this->getGradeToExecute())
		{
				throw Form::GradeTooLowException();
		}
		else
		{
				std::ofstream ofs(this->_target.c_str()); // std::ofstream için const char* tipinde dosya adı bekleniyor.
				if (!ofs.is_open())
				{
						std::cout << "Cannot open file: " << this->_target << std::endl;
						return;
				}
				ofs << Atree;
				ofs.close(); // Dosyayı kapatmayı unutmayın.
				std::cout << "Shrubbery successfully created in " << this->_target << std::endl;
		}
}
