#if !defined(RPN_HPP)
#define RPN_HPP

#include <iostream>
#include <stdexcept>
#include <stack>
#include <sstream>

class RPN
{
    private:
        std::stack<int> _numbers;
        void applyOperator(std::string &op);
    public:
        RPN(/* args */);
        ~RPN();
        void calculater(const std::string &args);

};

#endif // RPN_HPP
