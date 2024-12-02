#include "SerializationToData.hpp"

SerializationToData::SerializationToData(){}

SerializationToData::~SerializationToData(){}

uintptr_t SerializationToData::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *SerializationToData::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}