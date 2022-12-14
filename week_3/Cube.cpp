#include "Cube.h"
#include <iostream>

namespace uiuc
{
    Cube::Cube()
    {
        length_ = 1;
        std::cout << "Default constructor invoked!" << std::endl;
    }

    Cube::Cube(const Cube &obj)
    {
        length_ = obj.length_;
        std::cout << "Copy Constructor invoked!" << std::endl;
    }
    Cube &Cube::operator=(const Cube &obj)
    {
        length_ = obj.length_;
        std::cout << "Assignment operator invoked!" << std::endl;
        return *this;
    }
}