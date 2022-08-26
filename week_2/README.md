1. Stack Memory
    - In C++, programmer has control over the memory and lifecycle of every variable. 
    - By default, every variable in C++ is placed in stack memory.
    - Every C++ variable has four things:
        - A name
        - A type
        - A value
        - A location in memory ("memory address")
        - In C++, the & operator returns the memroy address of a variable as demonstrated [here](./addressOf.cpp).
    - Stack memory is associated with the current function and the memory's lifecycle is tied to the function.
    - When the functions returns or ends, the stack memory of that function is released.
    - [This](./foo.cpp) demonstrates the stack memory allocation in ++.
1. Pointer 
    - A pointer is a variable that stores the memory address of the data
    - Simply put: pointers are a level of indirection from the data
    - In c++, a pointer is defined by adding * to the type of variable.
        - integer pointer:
        ```
        int * p = &num
        ```
1. Deference Operator
    - Given a pointer, a level of indirection can be removed with the dereference operator*
    ```
    int num = 7;
    int * p = &num;
    int value_in_num = *p;
    *p = 42;
    ```
