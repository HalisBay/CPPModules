#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b1("b1", -10);
        b1.getGrade();
        std::cout << b1;
        b1.decrementToGrade();
        std::cout << "After decrement: " << b1;

        b1.incrementToGrade();
        std::cout << "After increment: " << b1;
        b1.setGrade(150);
        std::cout << "After setting grade note to 150:\n" << b1.getGrade() << std::endl;

        
        //b1.setGrade(200);
        b1.setGrade(0);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
