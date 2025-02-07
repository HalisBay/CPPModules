#include "BitcoinExchange.hpp"

template <typename T>
bool checkValue(T value)
{
    if (static_cast<long long>(value) > 2147483647 || static_cast<long long>(value) < 0)
        return true;  
    return false;
}
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

BitcoinExchange::BitcoinExchange()
{
    std::ifstream file("data.csv");
    if(!file.is_open())
        throw std::runtime_error("Error: could not open file.\n");
    std::string line;
    std::getline(file,line);
    while(std::getline(file,line))
    {
        std::stringstream ss(line);
        std::string date;
        float value;
        if(std::getline(ss,date,',') && ss >> value)
        {
            if(validDater(date) || checkValue(value))
                throw std::runtime_error("your data file has broken\n");
            _btcDb[date] = value;
        }
        else
            throw std::runtime_error("Your data file had broken.\n");
    }

}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::processInputFile(std::string const &fileName)
{
    std::ifstream file(fileName.c_str());
    if (!file.is_open())
        throw std::runtime_error("couldnt open file\n");
    std::string line;
    std::getline(file,line); // 0. satırı geçmek için
    while (std::getline(file,line))
    {
        std::stringstream ss (line);
        std::string date,value;
        if(std::getline(ss,date,'|') && std::getline(ss,value))
        {
            date = date.substr(0,date.find_last_not_of(" \t") +1);
            value = value.substr(0,value.find_last_not_of(" \t") +1);

            if(validDater(date))
            {
                std::cerr << "Error: bad input =>" << date << "\n";
                continue;
            }
            long long lValue = atoll(value.c_str());
            if(lValue> 2147483647)
            {
                std::cerr << "Error: too large a number.\n";
                continue;
            }
            if (validValue(value))
            {
                std::cerr << "Error: not a positive number.\n";
                continue;
            }
            float clsValue = getClosestValue(date);
            float result = 0.0f;
            std::istringstream(value) >>result;
            result *= clsValue;

            std::cout << date << " => " << value << " = "<<result << std::endl;
    
        }
        else
            std::cerr << "Error: bad input => "<<line<<std::endl;
    }
    
    
}
bool BitcoinExchange::validDater(std::string const &date) {

    if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
        return true;
    }

    
    for (size_t i = 0; i < 10; i++) {
        if ((i != 4 && i != 7) && !isdigit(date[i])) {
            return true;
        }
    }
    int year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());

    if (month < 1 || month > 12) {
        return true;
    }

    if (day < 1 || day > 31) {
        return true;
    }

    if (month == 2) {
        // Şubat ayı kontrolü
        if (isLeapYear(year)) {
            if (day > 29) return true;
        } else {
            if (day > 28) return true;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) return true;
    }

    return false;
}

bool BitcoinExchange::validValue(std::string const &value)
{
    float v = 0.0f;
    std::istringstream(value) >> v;
    return !(v >= 0 && v <=1000);
}

float BitcoinExchange::getClosestValue(std::string const &date)
{
    std::map <std::string, float>::iterator it = _btcDb.lower_bound(date);
    if (it == _btcDb.begin())
    {
        return it->second;
    }
    std::map<std::string, float>::iterator prevIt = it;
    prevIt--;
    return prevIt->second;
}
