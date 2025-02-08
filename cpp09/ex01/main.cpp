#include "RPN.hpp"

int main(int argc, char *argv[])
{
    try
    {
        if (argc != 2)
        {
            throw std::runtime_error("Error, usage: ./RPN \"args\"");
        }
        RPN rpn;
        rpn.calculater(argv[1]);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}
