#pragma once

namespace uiuc
{
    class Cube
    {
    public:
        Cube(double length);              // custom non default constructor
        Cube(const Cube &obj);            // copy constructor
        Cube &operator=(const Cube &obj); // assignment operator
        const double getVolume();
        double getSurfaceArea();
        void setLength(double length);

    private:
        double length_;
    };
}