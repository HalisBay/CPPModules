#include "iter.hpp"

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    std::cout << "Printing integers in the array:" << std::endl;
    iter(intArray, arraySize(intArray), displayer<int>);
    std::cout << std::endl;

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "Printing doubles in the array:" << std::endl;
    iter(doubleArray, arraySize(doubleArray), displayer<double>);
    std::cout << std::endl;

    char charArray[] = {'h', 'a', 'l', 'i', 's'};
    std::cout << "Printing characters in the array:" << std::endl;
    iter(charArray, arraySize(charArray), displayer<char>);
    std::cout << std::endl;

    return 0;
}