#if !defined(SerializationToData_HPP)
#define SerializationToData_HPP

#include <iostream>
#include <cstdint>
#include <string>

struct Data {
    int value;
    char character;
    float floatValue;
};

class SerializationToData
{
private:
    std::string _str;

public:
    SerializationToData();
    ~SerializationToData();
    SerializationToData(std::string str);
    SerializationToData(const SerializationToData &cpy);
    SerializationToData &operator=(const SerializationToData &other);

    std::string getStr() const;
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};

#endif // SerializationToData_HPP
