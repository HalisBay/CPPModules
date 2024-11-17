#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & other);
		
		std::string	getTarget( void ) const;
		
		void execute(Bureaucrat const & executor) const;
};

#endif