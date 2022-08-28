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
    - Automatic Assignment Operator
    - If an assignment operator is not provided, the C++ compiler provides an automatic assignment operator.
    - The automatic assignment operator will copy the contents of all member variables.
    - Custom Assignment Operator