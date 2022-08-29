#include "Cube.h"
#include <iostream>
using uiuc::Cube;

int main()
{
    Cube c(10);
    Cube *myCube = &c;
    myCube->setLength(5);
    std::cout << "myCube: " << myCube->getVolume() << std::endl;
    std::cout << "c: " << c.getVolume() << std::endl;
    return 0;
}