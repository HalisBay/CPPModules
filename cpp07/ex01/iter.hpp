#if !defined(ITER_HPP)
#define ITER_HPP
#include <iostream>


template <typename T, size_t N>
size_t arraySize(T (&)[N]) {
    return N;
}


template <typename T>
void iter(T *arr, size_t arr_len, void (*func)(T const &ref)) {
    for (size_t i = 0; i < arr_len; ++i) {
        func(arr[i]);
    }
}

template <typename T>
void displayer(T const &element) {
    std::cout << element << " ";
}

#endif // ITER_HPP
