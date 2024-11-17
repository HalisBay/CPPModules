#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    Intern intern;

    try {
        AForm* form1 = intern.makeForm("presidentialPardonForm", "Musti");
        delete form1;

        AForm* form2 = intern.makeForm("shrubberyCreationForm", "Ali");
        delete form2;

        AForm* form3 = intern.makeForm("robotomyRequestForm", "Samet");
        delete form3;
        
        AForm* form4 = intern.makeForm("dümendenform", "korsan");

        delete form4;
    } catch (const Intern::Exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}