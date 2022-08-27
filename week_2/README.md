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
    - It is not a good idea to return a memory address outside of a function. [Here](./puzzle.cpp) is an example of pointers in action that results to unexpected results.
    - [Here](./main.cpp) is an example of pointers, reference, and dereference in action.

1. Heap Memory
    - Heap memory allows us to create a memory independent of the lifecycle of the function.
    - In C++, if we need to exist for longer than lifecycle of the function, we must use heap memory.
    - The only way to create heap memory in C++ is with the new operator.
    - The new operator returns a pointer to the memory storing the data - not an instance of the data itself.
    - The new operator in C++ will always do three things:
        - Allocate memory on the heap for data structure.
        - Initialize the data structure
        - Return a pointer to the start of the data structure
    The memory is only every is only every reclaimed by the system when the pointer is passed to the delete operator.
    - nullptr
        - The C++ keyword nullptr is a pointer that points to the memory address 0X0
        - nullptr represents a pointer to "nowhere"
        - Address 0X0 is reserved and never used by the system.
        - Address 0x0 will always generate a "segmentation fault" when accessed.
        - Calls to delete 0x0 are ignored.
        - [Here](./heap1.cpp) is an example of nullptr in action.
    - Arrow Operator -> 
        - When an object is stored via a pointer, acces can be made to member functions using the -> operator:
        ```
        c->getVolume(); 
        identical to
        (*c).getVolume();
        ```
    - [Puzzle1](./heap_memory_puzzles/puzzle1.cpp)
    - [Puzzle2](./heap_memory_puzzles/puzzle2.cpp)
    - [Puzzle3](./heap_memory_puzzles/puzzle3.cpp)


