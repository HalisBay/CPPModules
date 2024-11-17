#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

class Intern
{
    private:

    public:
        Intern();
       ~Intern();
        Intern(Intern const &cpy);
        Intern &operator=(Intern const &other);
        AForm *makeForm(std::string const &name,std::string const & target);
        class Exception : public std::exception {
        public:
                virtual const char *what() const throw();
        };
};
#endif