#include <iostream>
using namespace std;

int main()
{
    int *x = new int;
    int &y = *x;
    y = 4;

    // prints top of stack memory address
    cout << &x << endl;
    // prints bottom of heap memory address
    cout << x << endl;
    // prints 4
    cout << *x << endl;

    // prints bottom of heap memory address
    cout << &y << endl;
    // prints 4
    cout << y << endl;
    // prints top of stack memory address
    // cout << *y << endl;

    return 0;
}