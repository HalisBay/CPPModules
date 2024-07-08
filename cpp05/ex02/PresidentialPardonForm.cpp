#include "PresidentialPardonForm.hpp"

//sign 25, exec 5

PresidentialPardonForm::PresidentialPardonForm() : Form("Roboto Default Form", 25, 5)
{
	this->_target = "Default";
    std::cout << "Roboto Default Const Called"<< std::endl;}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Roboto Parameter Form", 25, 5)
{
	this->_target = target;
    std::cout << "Roboto Parameter Const Called"<< std::endl;}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << *this << " was destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy)
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
		throw (Form::SignException());
	else if (executor.getGradeNote() > this->getGradeToExecute())
		throw (Form::GradeTooLowException());
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}