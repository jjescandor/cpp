#include "Cube.h"
using uiuc::Cube;

int main()
{
    int *p = new int;
    Cube *c = new Cube;
    *p = 42;
    (*c).setLength(4.0);

    delete c;
    c = 0;
    delete p;
    p = 0;
    return 0;
}