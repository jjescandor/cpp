#include <iostream>

using namespace std;

void foo()
{
    int x = 42;
    cout << " x in foo(): " << x << endl;
    cout << "&x in foor(): " << &x << endl;
}

int main()
{
    int num = 7;
    cout << " num in main(): " << num << endl;
    cout << "&num in main(): " << &num << endl;

    foo();

    return 0;
}
