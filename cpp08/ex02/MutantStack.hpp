#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin()
    {
        std::vector<T> vector;
        T top;
        iterator ret;
        int n = 0;

        while (!this->empty())
        {
            top = this->top();
            vector.push_back(top);
            this->pop();
            n++;
        }
        this->push(vector[n - 1]);
        n--;
        ret = this->c.begin();
        while (n--)
            this->push(vector[n]);
        return ret;
    }

    iterator end()
    {
        return this->c.end();
    }
};

#endif // MUTANTSTACK_HPP
