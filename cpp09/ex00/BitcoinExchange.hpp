#if !defined(BITCOINEXCHANGE_HPP)
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <stdexcept>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>
class BitcoinExchange{
    private:
        std::map <std::string, float> _btcDb;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        void processInputFile(std::string const & fileName);
        bool validDater(std::string const &date);
        bool validValue(std::string const &value);
        float getClosestValue(std::string const &date);
};

#endif // BITCOINEXCHANGE_HPP
