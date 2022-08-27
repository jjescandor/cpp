#include <iostream>
using namespace std;

int main()
{
    int *p, *q;
    p = new int;
    q = p;
    *q = 8;
    // prints 8
    cout << *p << endl;

    q = new int;
    *q = 9;
    // prints 8
    cout << *p << endl;
    // prints 9
    cout << *q << endl;

    return 0;
}