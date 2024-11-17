#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
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