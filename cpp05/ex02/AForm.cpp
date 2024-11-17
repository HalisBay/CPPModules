#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(110) {
    std::cout << "Default constructor called for AForm " << _name << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
    else if (_gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
}

AForm::~AForm() {
    std::cout << "Destructor called for AForm " << _name << std::endl;
}

AForm::AForm(const AForm &cpy) {
    *this = cpy;
}

AForm &AForm::operator=(const AForm &other) {
    if (this != &other) {
        _name = other._name;
        _isSigned = other._isSigned;
        _gradeToSign = other._gradeToSign;
        _gradeToExecute = other._gradeToExecute;
    }
    return *this;
}

void AForm::beSigned(Bureaucrat &sign) {
    try {
        if (sign.getGrade() > _gradeToSign) {
            _isSigned = false;
            throw GradeTooLowException();
            return ;
        }
        else
        {
            _isSigned = true;
        }
    } catch (AForm::GradeTooLowException &e) {
        std::cout << sign.getName() << " cannot sign " << _name << " because: " << e.what() << std::endl;
    }
}

void AForm::setSigned(bool sign) {
    _isSigned = sign;
}

std::string AForm::getName() const {
    return _name;
}

bool AForm::getSigned() const {
    return _isSigned;
}

int AForm::getGradeToSign() const {
    return _gradeToSign;
}

int AForm::getGradeToExecute() const {
    return _gradeToExecute;
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Grade Too High from AForm";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Grade Too Low from AForm";
}
const char * AForm::SignException::what() const throw()
{
    return "Boss, we have a sign problem";
}

std::ostream &operator<<(std::ostream &o, const AForm &f) {
    o << "AForm: " << f.getName() << "\n\tSigned: " << (f.getSigned() ? "Yes" : "No")
      << "\n\tGrade to Sign: " << f.getGradeToSign() << "\n\tGrade to Execute: " << f.getGradeToExecute() << std::endl;
    return o;
}