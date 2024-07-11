#include "SerializationToData.hpp"
#include <iostream>

int main()
{
    Data data = {42, 'A', 3.14f};
    uintptr_t serialized = SerializationToData::serialize(&data);
    Data *deserialized = SerializationToData::deserialize(serialized);

    std::cout << "Deserialized data:" << std::endl;
    std::cout << "Value: " << deserialized->value << std::endl;
    std::cout << "Character: " << deserialized->character << std::endl;
    std::cout << "Float Value: " << deserialized->floatValue << std::endl;

    return 0;
}
