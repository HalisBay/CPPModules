#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Roboto Default Form", 72, 45)
{
	this->_target = "Default";
    std::cout << "Roboto Default Const Called"<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robo Parameter Form", 72, 45)
{
	this->_target = target;
	std::cout << "Roboto Parameter Const Called"<< std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << *this <<" was destroyed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy) : AForm(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExecute())
{
	    *this = cpy;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & other)
{
	this->_target = other.getTarget();
	return (*this);
}

std::string	RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == 0)
		throw (AForm::SignException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (AForm::GradeTooLowException());	
	std::cout << "--drilling noises--" << std::endl;
	int num = std::rand() % 2;
	if (num == 1)
	{
		std::cout << this->_target << " has been robotomized" << std::endl;
	}
	else
		throw (RobotomyRequestForm::RobotoException());
}

const char * RobotomyRequestForm::RobotoException::what() const throw()
{
	return "Roboto Exception is Here !.!";
}
