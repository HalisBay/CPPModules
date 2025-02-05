#if !defined(WHATEVER_HPP)
#define WHATEVER_HPP
#include <iostream>

template <typename T>
void swap(T & x , T & y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T min(T a, T b)
{
    return(b <= a) ? b : a;
}

template <typename T>
T max(T a, T b)
{
    return(b <= a) ? a : b;
}

#endif // WHATEVER_HPP
