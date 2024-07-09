#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(110) {
    std::cout << "Default constructor called for Form " << _name << std::endl;
}

Form::Form(std::string name, size_t gradeToSign, size_t gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
    else if (_gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
}

Form::~Form() {
    std::cout << "Destructor called for Form " << _name << std::endl;
}

Form::Form(const Form &cpy) {
    *this = cpy;
}

Form &Form::operator=(const Form &other) {
    if (this != &other) {
        _name = other._name;
        _isSigned = other._isSigned;
        _gradeToSign = other._gradeToSign;
        _gradeToExecute = other._gradeToExecute;
    }
    return *this;
}

void Form::beSigned(Bureaucrat &sign) {
    try {
        if (sign.getGradeNote() > _gradeToSign) {
            throw GradeTooLowException();
        }
        _isSigned = true;
        std::cout << *this << " was just signed by the bureaucrat: " << sign.getName() << std::endl;
    } catch (Form::GradeTooLowException &e) {
        std::cout << sign.getName() << " cannot sign " << _name << " because: " << e.what() << std::endl;
    }
}

void Form::setSigned(bool sign) {
    _isSigned = sign;
}

std::string Form::getName() const {
    return _name;
}

bool Form::getSigned() const {
    return _isSigned;
}

size_t Form::getGradeToSign() const {
    return _gradeToSign;
}

size_t Form::getGradeToExecute() const {
    return _gradeToExecute;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade Too High";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade Too Low";
}

std::ostream &operator<<(std::ostream &o, const Form &f) {
    o << "Form: " << f.getName() << "\n\tSigned: " << (f.getSigned() ? "Yes" : "No")
      << "\n\tGrade to Sign: " << f.getGradeToSign() << "\n\tGrade to Execute: " << f.getGradeToExecute() << std::endl;
    return o;
}
