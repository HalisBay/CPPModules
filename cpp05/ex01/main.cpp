#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        std::cout << "CREATING:" << std::endl;
        std::cout << "----------------------------" << std::endl;
        
        Bureaucrat bob("Bob", 1);
        Bureaucrat bill("Bill", 132);

        Form a("A13", 4, 6);
        Form b("B97", 146, 135);

        // Attempting to create a Form with very low grades
        try {
            Form c("C46", 0, 1435); // This should throw GradeTooHighException
        } catch (std::exception &e) {
            std::cout << "Creation error: " << e.what() << std::endl; // Grade too high error
        }

        // Attempting to create a Form with very high grades
        try {
            Form d("D143", 583, -800); // This should throw GradeTooLowException
        } catch (std::exception &e) {
            std::cout << "Creation error: " << e.what() << std::endl; // Grade too low error
        }
        std::cout << std::endl;

        std::cout << "SIGNING FORMS:" << std::endl;
        std::cout << "----------------------------" << std::endl;

        // Successful signing
        std::cout << "SUCCESSFUL SIGNING:" << std::endl;
        try {
            bob.signForm(a);
            std::cout << a << " current status displayed" << std::endl;
        } catch (std::exception &e) {
            std::cout << "Signing failed: " << e.what() << std::endl;
        }
        std::cout << std::endl;

        // Unsuccessful signing
        std::cout << "UNSUCCESSFUL SIGNING:" << std::endl;
        try {
            bill.signForm(a);
            std::cout << a << " current status displayed" << std::endl;
        } catch (std::exception &e) {
            std::cout << "Signing failed: " << e.what() << std::endl;
        }
        std::cout << std::endl;

        // Successful signing
        std::cout << "SUCCESSFUL SIGNING:" << std::endl;
        try {
            bob.signForm(b);
            std::cout << b << " current status displayed" << std::endl;
        } catch (std::exception &e) {
            std::cout << "Signing failed: " << e.what() << std::endl;
        }
        std::cout << std::endl;

        // Successful signing
        std::cout << "SUCCESSFUL SIGNING:" << std::endl;
        try {
            bill.signForm(b);
            std::cout << b << " current status displayed" << std::endl;
        } catch (std::exception &e) {
            std::cout << "Signing failed: " << e.what() << std::endl;
        }
        std::cout << std::endl;

        std::cout << "DESTRUCTORS:" << std::endl;
        std::cout << "----------------------------" << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
