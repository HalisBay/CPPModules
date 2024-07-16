#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>

typedef std::vector<int> intVector;

class Span
{
private:
    unsigned int _i;
    unsigned int _size;
    std::vector<int> _vector;

public:
    Span(unsigned int i);
    ~Span();
    Span(const Span &s);
    const Span &operator=(const Span &s);

    unsigned int getI() const;
    unsigned int getSize() const;
    std::vector<int> getVector() const;

    void addNumber(int x);
    int longestSpan();
    int shortestSpan();
};

std::ostream &operator<<(std::ostream &o, const Span &s);

#endif // SPAN_HPP
