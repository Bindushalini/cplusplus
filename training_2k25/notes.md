C++98,c++11,C++17,C++23
Gen AI: Unlock Foundational Concepts
Introduction to Generative AI

LI learning notes:
Identifiers are values for variables, classes, functions, types.
starts with digits , letters/underscores.
Should not be a reserved word/keyword.
keywords: int, float, bool, void, class, new, delete, public, private, static, if else, switch, case, for , while etc.
camelCase, PascalCase, snake_case - naming conventions
private member variables - starts with _
Model - representation of reality
Classes are construct for models in c++
Encapsulation: keeping data and operations together for a model and only include info about that model.
model has to be consice.
Inheritance and polymorphism: subclass may inheritance properties from a super class.
And functions in base class can be redefined in derived class - leads to polymorphic behavior.
    Standard Input/Output Library
    String Handling
    Mathematics and Numeric Functions
    Containers and Iterators
    Algorithm Libraries
    C Standard Library Headers  

cin / cout : insertion and extraction operators respectively.
cstdlib includes functions for general utilities, such as memory allocation, process control, and random number generation.
cstdio includes functions for input and output operations, similar to iostream.
C++ Standard Library also provides a variety of mathematical functions through C headers like cmath and cstdlib. These functions include common operations like exponentiation, logarithms, trigonometric functions, and more

Containers: Such as std::vector, std::list, and std::map.
Algorithms: Functions for sorting, searching, and manipulating data.
Iterators: Objects that allow you to traverse containers.

Vectors:
std::vector is a sequence container that encapsulates dynamic size arrays.
 std::pmr::vector is an alias template that uses a polymorphic allocator.
The elements are stored contiguously, which means that elements can be accessed not only through iterators, but also using offsets to regular pointers to elements. This means that a pointer to an element of a vector may be passed to any function that expects a pointer to an element of an array.

The storage of the vector is handled automatically, being expanded as needed. Vectors usually occupy more space than static arrays, because more memory is allocated to handle future growth. This way a vector does not need to reallocate each time an element is inserted, but only when the additional memory is exhausted. 

The complexity (efficiency) of common operations on vectors is as follows:

Random access - constant 𝓞(1).
Insertion or removal of elements at the end - amortized constant 𝓞(1).
Insertion or removal of elements - linear in the distance to the end of the vector 𝓞(n).


integers - 32 bit wide.

initialiser list: Unnecessary Default Constructor Calls - avoids object creayion and assignment(2 step creation)
Initializing Base Classes in Inheritanc
Initializing const and reference Members
 Improving Performance with Complex Objects - such as vector , string.


 const Members:

Represent constant values that should not change after initialization.
Examples: configuration settings, fixed IDs, or any immutable properties of an object.
Reference Members:

Used to store references to external objects or variables that the class operates on.
Examples: when an object needs access to a resource or variable that is maintained externally.

typedef - alias for existing data type(in case of long names)
typedef unsigned long int Scores - alais of unsigned long int as Scores

Scores abc_score = 0;
Scores xyz_score = 100;

alternate to typedef is using keyword
using Scores = unsigned long int;

to overcome the limitation of enumtype, enum classes are used
enum class: strongly typed.


float: trailing f;
double : without trailing f;

auto type = must be initialised at declaration
typeid(var_name).name()


address of first element of array will be stored in name of array variable - this can be pointed to a pointer.
int a[]={1,2...};
int *p=a;
print *p - prints first value of array.

need not use & address of operator(a)