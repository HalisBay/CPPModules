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
        b1.setGrade(150);
        std::cout << "After setting grade note to 50: " << b1;

        
        b1.setGrade(200); 
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
