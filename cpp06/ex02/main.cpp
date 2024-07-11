
#include "ThreeFunc.hpp"

int main() {
    const int numObjects = 10;
    Base* objects[numObjects];

    for (int i = 0; i < numObjects; ++i) {
        objects[i] = generate();
        identify(objects[i]);
        identify(*objects[i]);
        delete(objects[i]);
    }

    return 0;
}
