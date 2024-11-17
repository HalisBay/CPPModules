#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
                std::cout << "----------------------------------------" << std::endl;
                {
                                Bureaucrat a("Bureaucrat A", 50);
                                std::cout << a << std::endl;

                                PresidentialPardonForm form1("John Doe");
                                std::cout << form1 << std::endl;

                                try
                                {
                                                form1.beSigned(a);
                                                std::cout << form1 << std::endl;
                                }
                                catch (std::exception &e)
                                {
                                                std::cerr << e.what() << std::endl;
                                }

                                try
                                {
                                                form1.execute(a);
                                }
                                catch (std::exception &e)
                                {
                                                std::cerr << e.what() << std::endl;
                                }
                }
                std::cout << "----------------------------------------" << std::endl;
                {
                                Bureaucrat b("Bureaucrat B", 2);
                                std::cout << b << std::endl;

                                RobotomyRequestForm form2("Bender");
                                std::cout << form2 << std::endl;

                                try
                                {
                                                form2.beSigned(b);
                                                std::cout << form2 << std::endl;
                                }
                                catch (std::exception &e)
                                {
                                                std::cerr << e.what() << std::endl;
                                }

                                try
                                {
                                                form2.execute(b);
                                                form2.execute(b);
                                }
                                catch (std::exception &e)
                                {
                                                std::cerr << e.what() << std::endl;
                                }
                }
                std::cout << "----------------------------------------" << std::endl;
                {
                                Bureaucrat c("Bureaucrat C", 1);
                                std::cout << c << std::endl;

                                ShrubberyCreationForm form3("garden");
                                std::cout << form3 << std::endl;

                                try
                                {
                                                form3.beSigned(c);
                                                std::cout << form3 << std::endl;
                                }
                                catch (std::exception &e)
                                {
                                                std::cerr << e.what() << std::endl;
                                }

                                try
                                {
                                                form3.execute(c);
                                }
                                catch (std::exception &e)
                                {
                                                std::cerr << e.what() << std::endl;
                                }
                }
                std::cout << "----------------------------------------" << std::endl;

                return 0;
}