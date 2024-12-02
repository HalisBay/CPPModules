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
    SerializationToData();
    ~SerializationToData();
    SerializationToData(const SerializationToData &cpy);
    SerializationToData &operator=(const SerializationToData &other);

public:

    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};

#endif // SerializationToData_HPP
