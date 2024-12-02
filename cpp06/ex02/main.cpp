#include "ThreeFunc.hpp"

int main() {
    srand(time(0));

    for (int i = 0; i < 10; ++i) {
        Base* obj = generate(); 
        identify(obj);
        delete obj; 
    }

    return 0;
}
