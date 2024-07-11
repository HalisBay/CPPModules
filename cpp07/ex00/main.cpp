#include "whatever.hpp"

int main()
{
    int x = 3, y = 7;
    double a = 5, b = 8;
    float hb = 3.7, ay = 3.7;

    std::cout << "before the swap, x : " << x << " y: " << y << std::endl; 
    swap(x,y);
    std::cout << "after the swap, x : " << x << " y: " << y << std::endl; 

    int minXY = min(x,y);
    double minAB=min(a,b);
    float minHBAY=min(hb,ay);
    std::cout << "minimum value of x and y : " << minXY<< std::endl; 
    std::cout << "minimum value of a and b : " << minAB<< std::endl; 
    std::cout << "minimum value of HBAY " << minHBAY<< std::endl;

    int maxXY = max(x,y);
    double maxAB=max(a,b);
    float maxHBAY=max(hb,ay);
    std::cout << "maximum value of x and y : " << maxXY<< std::endl; 
    std::cout << "maximum value of a and b : " << maxAB<< std::endl; 
    std::cout << "maximum value of HBAY " << maxHBAY<< std::endl; 

    return 0;
}
