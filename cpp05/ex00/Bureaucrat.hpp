#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

class Bureaucrat {
private:
    std::string _name;
    size_t _grade;

public:
    Bureaucrat();
    Bureaucrat(std::string name, size_t grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &cpy);
    Bureaucrat &operator=(const Bureaucrat &other);

    void incrementToGrade();
    void decrementToGrade();
    std::string getName() const;
    size_t getGrade() const;
    void setGrade(int grade);

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
