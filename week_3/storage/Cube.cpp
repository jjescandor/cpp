#include <iostream>
#include "Cube.h"

namespace uiuc
{
    Cube::Cube(double length)
    {
        length_ = length;
        std::cout << "Created $" << getVolume() << std::endl;
    }
    Cube::Cube(const Cube &obj)
    {
        length_ = obj.length_;
        std::cout << "Created $" << getVolume() << " via copy" << std::endl;
    }
    Cube &Cube::operator=(const Cube &obj)
    {
        std::cout << "Transformed $" << getVolume() << "-> $" << std::endl;
        length_ = obj.length_;
        return *this;
    }

    const double Cube::getVolume()
    {
        return length_ * length_ * length_;
    }

    double Cube::getSurfaceArea()
    {
        return 6 * length_ * length_;
    }

    void Cube::setLength(double length)
    {
        length_ = length;
    }
}