#include <iostream>
#include "Array.hpp"

int main() {
    Array<int> arr1(2);
    arr1[0] = 2;
    arr1[1] = 3;
    std::cout << "arr1 size: " << arr1.size() << std::endl;
    for (std::size_t i = 0; i < arr1.size(); ++i) {
        std::cout << "arr1[" << i << "] = " << arr1[i] << std::endl;
    }

    Array<int> arr2(5);
    for (std::size_t i = 0; i < arr2.size(); ++i) {
        arr2[i] = i * 1.5;
    }
    std::cout << "arr2 size: " << arr2.size() << std::endl;
    for (std::size_t i = 0; i < arr2.size(); ++i) {
        std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
    }

    Array<int> arr3 = arr2;
    std::cout << "arr3 size: " << arr3.size() << std::endl;
    for (std::size_t i = 0; i < arr3.size(); ++i) {
        std::cout << "arr3[" << i << "] = " << arr3[i] << std::endl;
    }

    Array<double> arr4(5);
    for (std::size_t i = 0; i < arr4.size(); ++i) {
        arr4[i] = i * 1.3;
    }
    std::cout << "arr4 size: " << arr4.size() << std::endl;
    for (std::size_t i = 0; i < arr4.size(); ++i) {
        std::cout << "arr4[" << i << "] = " << arr4[i] << std::endl;
    }

    Array<char> arr5(5);
    char chars[] = {'A', 'B', 'C', 'D', 'E'};
    for (std::size_t i = 0; i < arr5.size(); ++i) {
        arr5[i] = chars[i];
    }
    std::cout << "arr5 size: " << arr5.size() << std::endl;
    for (std::size_t i = 0; i < arr5.size(); ++i) {
        std::cout << "arr5[" << i << "] = " << arr5[i] << std::endl;
    }
    Array<int> arrInt(5);
    for (std::size_t i = 0; i < arr5.size(); ++i) {
        arrInt[i] = static_cast<int>(arr5[i]);
    }
    std::cout << "arr5 Int size: " << arrInt.size() << std::endl;
    for (std::size_t i = 0; i < arrInt.size(); ++i) {
        std::cout << "arrInt[" << i << "] = " << arrInt[i]  << std::endl;
    }
    // Out of range erişim testi
    try {
        arr1[2] = 42;
        std::cout << arr1[1] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
