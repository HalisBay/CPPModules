#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Default Constructor Called" << std::endl;
}
Intern::~Intern()
{
    std::cout << "Intern Destructor Called" << std::endl;
}
Intern::Intern(Intern const &cpy)
{
    (void) cpy;
    std::cout << "Intern Copy Constructor Called" << std::endl;
}
Intern &Intern::operator=(Intern const &other)
{
    (void) other;
    std::cout << "Intern Assignment Operator Called" << std::endl;
    return *this;
}
const char *Intern::Exception::what() const throw() {
    return "Shift is over :|";
}

AForm *Intern::makeForm(std::string const &name,std::string const &target)
{
    std::string formNames[] = {"presidentialPardonForm", "shrubberyCreationForm", "robotomyRequestForm"};
    int c = -1;

    for (size_t i = 0; i < sizeof(formNames) / sizeof(formNames[0]); i++) {
        if (name == formNames[i]) {
            c = i;
            break;
        }
    }

    try {
        switch(c) {
            case 0:
                return new PresidentialPardonForm(target);
            case 1:
                return new ShrubberyCreationForm(target);
            case 2:
                return new RobotomyRequestForm(target);
            default:
                throw Intern::Exception();
        }
    } catch (Intern::Exception &e) {
        std::cout << e.what() << std::endl;
        return 0;
    }

}