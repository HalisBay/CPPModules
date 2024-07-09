#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;
class Form {
private:
    std::string _name;
    bool _isSigned;
    size_t _gradeToSign;
    size_t _gradeToExecute;

public:
    Form();
    Form(std::string name,size_t gradeToSign, size_t gradeToExecute);
    virtual ~Form();
    Form(const Form &cpy);
    Form &operator=(const Form &other);

    void beSigned(Bureaucrat &sign);
    void setSigned(const bool sign);

    std::string getName() const;
    bool getSigned() const;
    size_t getGradeToSign() const;
    size_t getGradeToExecute() const;

    virtual void execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
    class SignException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, const Form &f);

#endif // FORM_HPP
