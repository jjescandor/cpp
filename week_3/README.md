1. Class Constructors
    - When an instance of a class is created, the class constructor sets up the initial state of the object.
    - C++ has an Automatic Default Constructor. If we do not provide any custom constructors, the C++ compiler provides an automatic default constructor for our class for free!
    - The automatic default constructor will only initialize all member variables to their default values.
    - Custom Default Constructor
    - The simplest constructor we can provide is a custom default constructor that specifies the state of the object when the object is constructed. We define one by creating:
        - A member function with the same name of the class.
        - The function takes zero parameters.
        - The function does not have a return type
        ```
        //Cube.h
        Cube();
        
        //Cube.cpp
        Cube::Cube(){
            length_ = 1;
        }
        ```
    - Custom Constructors
    - We can also specify custom, non-default constructors that require client code to supply arguments:
    ```
    Cube:Cube(double length){
        length_ = length;
    }
    // one-argument constructor specifying initial length
    ```
1. Copy Constructors
    - Automatic Copy Constructor
    - If we do not provide a custom copy constructor, the compiler provides an automatic copy constructor for our class for free!
    The automatic copy constructor will copy the contents of all member variables.
    - Custom copy constructor
    - A custom copy constructor is:
        - A class constructor
        - Has exactly one argument
        - The argument must be const referece of the class
        ```
        Cube::Cube(const Cube & obj){
            length_ = obj.length_;
        }
        ```
1. Copy Assignment Operator
    - Automatic Assignment Operator
    - If an assignment operator is not provided, the C++ compiler provides an automatic assignment operator.
    - The automatic assignment operator will copy the contents of all member variables.
    - Custom Assignment Operator
    - A custom assignment operator is:
        - Is a public member function of the class.
        - Has the function name operator=
        - Has a return value of a reference of the class' type
        - Has exactly one argument
            - The argument must be a const reference of the class' type
    - [Here](./Cube.cpp) is a custom assignment reference in action.
1. Variable Storage
    - In C++, an instance of a variable can be stored directly in memory, accessed by pointer, or accessed by reference.
    - Direct Storage
        - By default, variables are stored directly in memory.
        - The type of a variable has no modifiers.
        - The object takes up exactly its size in memory.
    - Storage by Pointer
        - The type of a variable is modified with an asterisk(*)
        - A pointer takes a "memory address width" of memory
        (ex: 64 bits on a 64-bit system)
        - The pointer "points" to the allocated space of the object.
    - Storage by Reference 
        - A reference is an alias to existing memory and is denoted in the type with an ampersand (&).
        A reference does not store memory itself, it is an an alias to another variable. The alias must be assigned when the variable is initialized.
        ```
        Cube &c = cube
        int &i = count
        ```
    - Return by ____
    - Similarly, values can be returned all three ways as well:
        - Return by value default
        - Return by pointer (modified with *)
        - Return by reference (modified with &, acts as an alias)
    > **Never return a reference to a stack variable created on the stack of your current function!**
1. Class Destructor
    - When an instance of a class is cleaned up, the class destructor is the last call in a class's lifecycle.
    - Automatic Default Destructor
        - An automatic default destructor is added to your class if no other destructor is defined.
        - The only action of the automatic default destructor is to call the default destructor of all member objects.
        - A destructor should never be called directly. Instead, it is automatically called when the object's memory is being reclaimed by the system:
            - If the object is on the stackl, when the functions returns.
            - If the object is on the heap, when delete is used.
    - Custom Destructor
    - To add custom behavior to the end-of-life of the function, a custom destructor can be defined as: 
        - A custom destructor is a member function.
        - The function's destructor is the name of the class, preceded by a tilde ~
        - All destructors have a zero arguments and no return types.
        ```
        Cube::~Cube();
        ```
    - [Here](./destructor/main.cpp) is a custom destructor in action
    - A custom destructor is essential when an object allocates an external resource that must be closed or freed when object is destroyed:
        - Heap memory
        - Open files
        - Shared memory

    



    
    






    
    