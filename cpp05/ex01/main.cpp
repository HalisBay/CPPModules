#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat musti("musti", 1);
        Bureaucrat ali("ali", 52);

        Form a("A10", 10, 50);
        Form b("B51", 51, 150);

        try {
            Form c("c0", 0, 0); //GradeTooHighException
        } catch (std::exception &e) {
            std::cout << "Creation error: " << e.what() << std::endl;
        }

        try {
            Form d("D500", 500, 500); // GradeTooLowException
        } catch (std::exception &e) {
            std::cout << "Creation error: " << e.what() << std::endl;
        }
        try {
            musti.signForm(a);
        } catch (std::exception &e) {
            std::cout << "Signing failed: " << e.what() << std::endl;
        }
        std::cout << std::endl;

        // Unsuccessful signing
        std::cout << "UNSUCCESSFUL SIGNING:" << std::endl;
        try {
            ali.signForm(a);
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
