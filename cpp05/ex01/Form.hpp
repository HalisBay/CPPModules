#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    std::string _name;
    bool _isSigned;
    int _gradeToSign;
    int _gradeToExecute;

public:
    Form();
    Form(std::string name,int gradeToSign, int gradeToExecute);
    ~Form();
    Form(const Form &cpy);
    Form &operator=(const Form &other);

    void beSigned(Bureaucrat &sign);
    void setSigned(const bool sign);

    std::string getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, const Form &f);

#endif // FORM_HPP