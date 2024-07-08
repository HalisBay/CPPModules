#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b1("John", 1);
        std::cout << b1;
        b1.decrementToGrade();
        std::cout << "After decrement: " << b1;

        b1.incrementToGrade();
        std::cout << "After increment: " << b1;
        // Test increment and decrement

        // Test setting grade note
        b1.setGrade(150);
        std::cout << "After setting grade note to 50: " << b1;

        // Trying to set an invalid grade
        b1.setGrade(200); // This should throw GradeTooHighException
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
