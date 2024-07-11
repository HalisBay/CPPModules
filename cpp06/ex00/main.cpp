#include "Converter.hpp"

int main(int argc, char **argv) {
    if (argc != 2)
    {
        std::cout << "please enter 2 parameters" << std::endl;
        return 1;
    }
    Converter converter1(argv[1]);
    static_cast<char>(converter1);
    static_cast<int>(converter1);
    static_cast<float>(converter1);
    static_cast<double>(converter1);
    std::cout << std::endl;
    return 0;
}