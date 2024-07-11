#include <iostream>
#include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int main() {
    Array<int> arr1;
    std::cout << "arr1 size: " << arr1.size() << std::endl;

    Array<int> arr2(5);
    std::cout << "arr2 size: " << arr2.size() << std::endl;

    arr2[0] = 10;
    arr2[1] = 20;
    arr2[2] = 30;

    std::cout << "arr2 elements:";
    for (std::size_t i = 0; i < arr2.size(); ++i) {
        std::cout << " " << arr2[i];
    }
    std::cout << std::endl;

    Array<int> arr3 = arr2;
    Array<int> arr4;
    arr4 = arr2;

    arr2[0] = 100;

    std::cout << "arr3 elements after modification of arr2:";
    for (std::size_t i = 0; i < arr3.size(); ++i) {
        std::cout << " " << arr3[i];
    }
    std::cout << std::endl;

    std::cout << "arr4 elements after modification of arr2:";
    for (std::size_t i = 0; i < arr4.size(); ++i) {
        std::cout << " " << arr4[i];
    }
    std::cout << std::endl;

    // Test out-of-bounds access (with exception handling)
    try {
        std::cout << arr2[5] << std::endl;  // Should throw out_of_range exception
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
