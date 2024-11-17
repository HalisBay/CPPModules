#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << this->_name << " destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else {
        this->_grade = grade;
        std::cout << "Created " << name << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) {
    *this = cpy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    this->_name = other._name;
    this->_grade = other._grade;
    return *this;
}

void Bureaucrat::incrementToGrade() {
    setGrade(this->_grade - 1);
}

void Bureaucrat::decrementToGrade() {
    setGrade(this->_grade + 1);
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::setGrade(int grade) {
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        this->_grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade Too Low";
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &a) {
    o << "Bureaucrat " << a.getName() << ":\n\tgrade: " << a.getGrade() << std::endl;
    return o;
}
