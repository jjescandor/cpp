#pragma once
#include "HSLAPixel.h"
using uiuc::HSLAPixel;

namespace uiuc
{
    class Cube
    {
    public:
        Cube(double length, HSLAPixel color);

        double getLength() const;
        void setLength();

        double getVolume() const;
        double getSurfaceArea() const;

    private:
        double length_;
        HSLAPixel color_;
    };
};
