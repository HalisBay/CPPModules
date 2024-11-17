#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
    private:
		std::string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & cpy);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & other);
		
		std::string	getTarget( void ) const;
		void execute(Bureaucrat const & executor) const;

		class RobotoException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif