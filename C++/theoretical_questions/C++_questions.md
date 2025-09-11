# Questions related to c++ as a language. 
<details>
<summary>1. What is C++?</summary>
C++ is an object-oriented programming language created by Bjarne Stroustrup. It was published in 1985. C++ is an extension of the C language, with the addition of classes. Initially, Stroustrup called the new language “C with classes”. After a while, however, the name was changed to C++. The idea for C++ came from the C++ increment operator.
</details>

<details>
<summary>2. What is the difference between C and C++?</summary>

| C | C++ |
| -------- | ------- |
| C is a procedure-oriented programming language | C++ is an Object-oriented programming language |
| C does not support data hiding | Data is hidden by encapsulation to ensure that data structures and operators are used as intended |
| C is a subset of C++. | C++ is a superset of C. |
| Functio and operator overloading are not supported in C.|Function and operator overloading is supported in C++.|
|Functions can not be defined inside structures|Functions can be defined inside structures. |
|*calloc()* and *malloc()* functions are used for memory allocation and *free()*|New operator is used for memory allocation and deletes operator is used for memory deallocation.|
</details>

<details>
    <summary>3. What are the different data types present in C++?</summary>
        <summary>Primary</summary>
        Primary data types are the fundamental, basic types that are built directly into the             C++ language. They are used to represent simple values. They are also sometimes referred to as primitive data types.

int: Used for storing whole numbers (integers).

float: Used for single-precision floating-point numbers (numbers with a decimal point).

double: Used for double-precision floating-point numbers, offering more precision than float.

char: Used for storing a single character.

bool: Used for logical values, which can be either true or false.

void: Represents the absence of a value. It's often used with functions that do not return a value.
        <summary>Derived</summary>
Derived Data Types
Derived data types are those that are built from or based on primary data types. They are not new types of data but rather ways of organizing or using existing primary types in a structured manner.

Arrays: A collection of elements of the same data type stored in contiguous memory locations. For example, an int array is a collection of ints.

Pointers: Variables that store the memory addresses of other variables. A pointer to an int stores the memory address where an int is located.

References: An alias or alternative name for an existing variable. It provides another way to access the same memory location.

Functions: A function is a block of code that performs a specific task. While not a data storage type itself, its return type and parameters are based on other data types.
        <summary>User Defined</summary>
        The programmer creates user-defined data types to meet specific needs. They allow you to create complex data structures by combining primary and derived data types. They are a cornerstone of object-oriented programming.

Structures (struct): A way to group variables of different data types under a single name. This is useful for creating a single record of related information, such as a Student structure that holds a name (string), age (int), and GPA (float).

Classes (class): Similar to structures, but they can also contain functions (called "member functions") in addition to variables (called "data members"). They are the fundamental building blocks of C++'s object-oriented programming, serving as blueprints for objects.

Unions (union): A special data type that allows different data types to be stored in the same memory location. Only one member of the union can be active at a time.

Enumerations (enum): A type that consists of a set of named integer constants. It makes code more readable and easier to maintain by giving meaningful names to a set of numerical values.
</details>

# Questions regarding C++ syntax.
<details>
<summary>3. What are constructors and destructors? </summary>
Constructors are member functions with the same name as the class. They allow to initialize a value to the attributes of the object. 

    There are three types of constructors :
    + Default: Has no arguments.
    + Parameterized: Takes arguments to initialize the object with specific values.
    + Copy: Creates a new object as a copy of an existing object.
</details>

<details>
<summary>4. What is the difference between call by Value and call by reference?</summary>
When you call by value (int number), the function takes a copy of the variable’s value as a parameter. In contrast, when you call by reference (int& number), the function takes a reference to the variable’s address. This means that when you call by reference, you can modify the value of the original variable. On the other hand, when you call by value, the original variable does not undergo any changes.
</details>

<details>
<summary>5. What is a namespace?</summary>
Namespace provide the space where we can define or declare identifier i.e. variable,  method, classes.
A namespace, give you the advantage of defining the space or context in which identifiers are defined i.e. variable, method, classes. In essence, a namespace defines a scope.
</details>

<details>
<summary>6. What is std?</summary>
In C++, a namespace is a collection of related names or identifiers (functions, class, variables) which helps to separate these identifiers from similar identifiers in other namespaces or the global namespace.
</details>

<details>
<summary>8. What is the difference between reference and pointer? </summary>

| Feature                | Reference                          | Pointer                             |
|------------------------|------------------------------------|-------------------------------------|
| **Definition**         | Alias for a variable               | Variable holding an address         |
| **Initialization**     | Must be initialized when declared  | Can be initialized later            |
| **Reassignment**       | Cannot be reassigned               | Can be reassigned                   |
| **Nullability**        | Cannot be null                     | Can be null                         |
| **Dereferencing**      | Automatic                          | Requires `*` operator               |
| **Syntax**             | `int &ref = var;`                  | `int *ptr = &var;`                  |
| **Usage Example**      | `ref = newValue;`                  | `*ptr = newValue;`                  |

</details>

<details>
<summary>9. What is the diffence between Array and lists?</summary>

| Feature                | Array                                      | List (std::list)                          |
|------------------------|--------------------------------------------|-------------------------------------------|
| **Memory Allocation**  | Contiguous block of memory                 | Elements linked by pointers               |
| **Size**               | Fixed size, defined at compile time        | Dynamic size, can grow or shrink at runtime|
| **Access Time**        | Constant time (O(1)) for element access    | Linear time (O(n)) for element access     |
| **Insertion/Deletion** | Expensive, especially in the middle (O(n)) | Efficient, especially in the middle (O(1))|
| **Memory Overhead**    | Minimal overhead                           | Extra memory for pointers                 |
| **Cache Friendliness** | High, due to contiguous memory             | Low, due to non-contiguous memory         |
| **Usage**              | Suitable for static data                   | Suitable for dynamic data                 |

</details>

<details>
<summary>10. Discuss the difference between prefix and postfix?</summary>
Prefix ++i, postfix i++.
</details>



# Questions regarding Object-oriented Programming.
<details>
<summary>11. What is the difference between class and struct? </summary>
A struct is a collection of variables that are public by default. In contrast, a class has its variables set to private by default. Additionally, a class can use member functions and operator overloading to perform operations on its variables.
</details>

<details>
<summary>12. What are virtual functions and pure virtual functions?</summary>
In C++, a virtual function is a member function in a base class that can be overridden in derived classes, with or without a default implementation. A pure virtual function, declared with `= 0`, has no base class implementation, making the class abstract and requiring derived classes to override it.
</details>


<details>
<summary>13. What are the C++ acces specifiers? </summary>
+ Public: Members declared as public are accessible from anywhere, including from outside the class, such as other classes or functions.
+ Private: Members declared as private are only accessible within the class itself and not from outside the class or by derived classes.
+ Protected: Members declared as protected are accessible within the class and by derived classes, but not from outside the class.
</details>



<details>
<summary>14. What are the different types of polymorphism in C++?</summary>
It comes in two main forms: compile-time (or static) polymorphism and run-time (or dynamic) polymorphism. Compile-time polymorphism is achieved through function overloading and operator overloading, where multiple functions or operators have the same name but different parameters or types. Run-time polymorphism, on the other hand, is achieved through inheritance and virtual functions, allowing a base class pointer or reference to call derived class methods. This enables more flexible and reusable code, as the same function call can produce different behaviors depending on the object’s actual class type. Polymorphism enhances the ability to extend and maintain code by promoting a more modular and abstract design.
</details>

<details>
<summary>15. What are friend class and friend function?</summary>
Friend Class: When a class is declared as a friend of another class, all member functions of the friend class have access to the private and protected members of the class that declared it as a friend. Essentially, the entire friend class gains full access to the internals of the other class.

Friend Function: A friend function is a specific function, not associated with any class, that is given access to the private and protected members of the class that declared it as a friend. This function is not a member of the class but can still access its internals.
</details>

<details>
<summary>16. What is an abstract Class and when do we use it ?</summary>
An abstract class in C++ is a class that contains at least one pure virtual function (a function declared with = 0). Because it has a pure virtual function, an abstract class cannot be instantiated directly. Its purpose is to serve as a base class from which other classes can inherit and provide concrete implementations of the pure virtual functions.
</details>
