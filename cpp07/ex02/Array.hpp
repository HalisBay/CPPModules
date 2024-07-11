#if !defined(ARRAY_HPP)
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>

template <typename T>
class Array {
private:
    T* _data;
    std::size_t _arraySize;

public:
    Array();
    ~Array();
    explicit Array(unsigned int n);
    Array(const Array<T>& other);
    Array<T>& operator=(const Array<T>& other);
    T& operator[](std::size_t index);
    std::size_t size() const;
};

template <typename T>
Array<T>::Array() : _data(NULL), _arraySize(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]), _arraySize(n) {}

template <typename T>
Array<T>::Array(const Array<T>& other) : _data(new T[other._arraySize]), _arraySize(other._arraySize) {
    for (std::size_t i = 0; i < _arraySize; ++i) {
        _data[i] = other._data[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    delete[] _data;

    _arraySize = other._arraySize;
    _data = new T[_arraySize];

    for (std::size_t i = 0; i < _arraySize; ++i) {
        _data[i] = other._data[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] _data;
}

template <typename T>
T& Array<T>::operator[](std::size_t index) {
    if (index >= _arraySize) {
        throw std::out_of_range("Index out of range");
    }
    return _data[index];
}

template <typename T>
std::size_t Array<T>::size() const {
    return _arraySize;
}

#endif // ARRAY_HPP


