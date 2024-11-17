#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
    std::string _name;
    bool _isSigned;
    int _gradeToSign;
    int _gradeToExecute;

public:
    AForm();
    AForm(std::string name,int gradeToSign, int gradeToExecute);
    virtual ~AForm();
    AForm(const AForm &cpy);
    AForm &operator=(const AForm &other);

    void beSigned(Bureaucrat &sign);
    void setSigned(const bool sign);

    std::string getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
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

std::ostream &operator<<(std::ostream &o, const AForm &f);

#endif // FORM_HPP