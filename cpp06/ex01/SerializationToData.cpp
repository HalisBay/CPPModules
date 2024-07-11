#include "SerializationToData.hpp"

SerializationToData::SerializationToData() : _str("Default")
{
    std::cout << "Default Constructor Called" << std::endl;
}

SerializationToData::~SerializationToData()
{
    std::cout << "Destructor Called" << std::endl;
}

SerializationToData::SerializationToData(std::string str) : _str(str)
{
    std::cout << "Parameter Constructor Called" << std::endl;
}

SerializationToData::SerializationToData(const SerializationToData &cpy)
{
    *this = cpy;
}

std::string SerializationToData::getStr() const
{
    return this->_str;
}

uintptr_t SerializationToData::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *SerializationToData::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

SerializationToData &SerializationToData::operator=(const SerializationToData &other)
{
    this->_str = other.getStr();
    return *this;
}
