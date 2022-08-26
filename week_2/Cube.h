#pragma once

class Cube
{
public:
    double getVolume();
    double getSuraceArea();
    void setLength(double length);

private:
    double length_;
}