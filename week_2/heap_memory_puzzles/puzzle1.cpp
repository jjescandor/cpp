#include <iostream>
using namespace std;
int main()
{
    int i = 2, j = 4, k = 8;
    int *p = &i, *q = &j, *r = &k;

    k = i;
    // prints 2 4 2 2 4 2
    cout << i << j << k << *p << *q << *r << endl;

    p = q;
    // prints 2 4 2 4 4 2
    cout << i << j << k << *p << *q << *r << endl;

    *q = *r;
    // prints 2 2 2 2 2 2
    cout << i << j << k << *p << *q << *r << endl;

    return 0;
}