1. Template Types
 - A Template type is a special type that can take on different types when the type is initialized. std::vector uses a template type.
 - std::vector standard library class that provides the functionality of a dynamically growing array with a "templated" type.
 ```
 #include <vector>               //define
 std::vector<T> v;               //initialize
 ::push_back(T);                 //add to (back) of array
 ::operator[](unsigned position) //access specific element
 ::size()                        //number of elements
 ```
 - When initializing a "templated type", the template type goes inside of <> at the end of the type name: