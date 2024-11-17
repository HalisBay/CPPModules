#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
    std::string _name;
    int _grade;

public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &cpy);
    Bureaucrat &operator=(const Bureaucrat &other);

    void incrementToGrade();
    void decrementToGrade();
    std::string getName() const;
    int getGrade() const;
    void setGrade(int grade);
    void signForm(AForm &f);
    void executeForm(AForm const &f);
    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &a);

#endif
