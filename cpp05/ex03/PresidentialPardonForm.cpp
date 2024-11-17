#include "PresidentialPardonForm.hpp"

//sign 25, exec 5

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Default Form", 25, 5)
{
	this->_target = "Default";
    std::cout << "Presidential Default Const Called"<< std::endl;}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Parameter Form", 25, 5)
{
	this->_target = target;
    std::cout << "Presidential Parameter Const Called"<< std::endl;}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << *this << " was destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy) : AForm(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExecute())
{
    *this = cpy;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & other)
{
	this->_target = other.getTarget();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == 0)
		throw (AForm::SignException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (AForm::GradeTooLowException());
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}