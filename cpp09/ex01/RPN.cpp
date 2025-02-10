#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

bool isOperator(std::string &op)
{
    return (op == "+" || op == "-" || op == "*" || op == "/");
}

void RPN::calculater(const std::string &args)
{
    std::istringstream iss(args);
    std::string op;

    while(iss >> op)
    {
        if(isOperator(op))
        {
            applyOperator(op);
        }
        else
        {
            int num = 0;
            std::istringstream(op) >>num;
            if (iss.fail() || num > 9)
            {                    
                throw std::invalid_argument("Error");
            }
            _numbers.push(num);
        }
    }
    if(_numbers.size() == 1)
        std::cout << _numbers.top()<<std::endl;
    else
        throw std::invalid_argument("Error");
}

void RPN::applyOperator(std::string &op)
{
    if (_numbers.size() < 2)
    {
        throw std::invalid_argument("Error");
    }

    int second = _numbers.top();
    _numbers.pop();
    
    int first = _numbers.top();
    _numbers.pop();
    
    int result = 0;

    if (op == "+")
    {
        result = first + second;
    }
    else if (op == "-")
    {
        result = first - second;
    }
    else if(op == "*")
    {
        result = first * second;
    }
    else if (op == "/")
    {
        if (second == 0)
            throw std::invalid_argument("Error");
        result = first / second;
    }
    _numbers.push(result);
    
}
