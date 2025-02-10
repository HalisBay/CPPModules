#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
    try
    {
        if (argc < 2)
        {
            throw std::runtime_error("Error, usage: ./PmergeMe numbers");
        }
        PmergeMe me;
        me.addArgs(argc,argv);
        me.sortAndPrint();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}
