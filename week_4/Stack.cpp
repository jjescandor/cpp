#include <iostream>
#include "Cube.h"
using uiuc::Cube;

class Stack
{
public:
    void push_back(const Cube &cube);
    Cube removeTop();
    Cube &peekTop();
    unsigned size() const;
};