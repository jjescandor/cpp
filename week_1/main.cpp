#include "Cube.h"
#include <iostream>

int main()
{
    uiuc::Cube c;
    c.setLength(2.4);
    std::cout << "Volume: " << c.getVolume() << std::endl;

    std::cout << "Surface Area: " << c.getSurfaceArea() << std::endl;
    return 0;
}
