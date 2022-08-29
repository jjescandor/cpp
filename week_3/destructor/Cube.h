#pragma once

namespace uiuc
{
    class Cube
    {
    public:
        Cube();
        Cube(double length);
        Cube(const Cube &obj);
        ~Cube();
        Cube &operator=(const Cube &obj);
        const double getVolume();
        double getSurfaceArea();
        void setLength(double length);

    private:
        double length_;
    };
}