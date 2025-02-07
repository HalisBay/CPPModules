#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
    try 
    {
        if (argc != 2) {
            throw std::runtime_error("Error, usage: ./btc file");
        }
        BitcoinExchange btc;
        btc.processInputFile(argv[1]);
        
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}
