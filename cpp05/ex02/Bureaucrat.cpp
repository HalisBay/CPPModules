#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _gradeNot(150) {
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << this->_name << " destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, size_t gradeNot) : _name(name) {
    if (gradeNot > 150)
        throw GradeTooLowException();
    else if (gradeNot < 1)
        throw GradeTooHighException();
    else {
        this->_gradeNot = gradeNot;
        std::cout << "Created " << name << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) {
    *this = cpy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    this->_name = other._name;
    this->_gradeNot = other._gradeNot;
    return *this;
}

void Bureaucrat::incrementToGradeNot() {
    setGradeNote(this->_gradeNot - 1);
}

void Bureaucrat::decrementToGradeNot() {
    setGradeNote(this->_gradeNot + 1);
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

size_t Bureaucrat::getGradeNote() const {
    return this->_gradeNot;
}

void Bureaucrat::setGradeNote(int grade) {
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        this->_gradeNot = grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade Too Low";
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &a) {
    o << "Bureaucrat " << a.getName() << ":\n\tgrade: " << a.getGradeNote() << std::endl;
    return o;
}

void Bureaucrat::signForm(Form &f) {
    try {
        f.beSigned(*this);
        std::cout << this->_name << " signs " << f.getName() << std::endl;
    } catch (Form::GradeTooLowException &e) {
        std::cout << this->_name << " cannot sign " << f.getName() << " because: " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const & f)
{
    try
    {
        f.execute(*this);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
}