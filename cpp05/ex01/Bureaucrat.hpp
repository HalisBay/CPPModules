#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form; // Forward declaration

class Bureaucrat {
private:
    std::string _name;
    size_t _gradeNot;

public:
    Bureaucrat();
    Bureaucrat(std::string name, size_t gradeNot);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &cpy);
    Bureaucrat &operator=(const Bureaucrat &other);

    void incrementToGradeNot();
    void decrementToGradeNot();
    std::string getName() const;
    size_t getGradeNote() const;
    void setGradeNote(int grade);
    void signForm(Form &f);

    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &a);

#endif // BUREAUCRAT_HPP
