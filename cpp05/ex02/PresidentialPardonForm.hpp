#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
    private:
		std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & cpy);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & other);
		
		std::string	getTarget( void ) const;
		
		void execute(Bureaucrat const & executor) const;
};

#endif