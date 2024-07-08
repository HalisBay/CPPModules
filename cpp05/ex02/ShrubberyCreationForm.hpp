#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
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