Type:
    - C++ is "Strongly Typed"
      - What does it mean?
    - In some languages you can write
    - Fundamental Types: 
        - Arithmetic : int,char,bool,float...
        - void, nullptr_t
    - Compound:
        - Reference (lvalue reference, rvalue reference)
        - Pointer
        - Pointer to member
        - Array
        - Function
        - Enumeration
        - Class and Union
    - Almost all can be cv-qualified
        - Putting const or volatile in front of the type
  
Type of type:

- Object : everything is and object references, functions and void 
- Scalar : Arithmetic, pointer, pointer to member, enumeration
- Trivial : Scalar, Trivially copyable class, array of trivially copyable class
- Incomplete : void, array of unknown bound, class with unknown bound array member


Type Traits and Concepts
- All these, and more, can be checked at compile time using type traits
- #include <type_traits>
  - std::is_integral<T>::value
  - std::is_pod<T>::value
  - std::is_same<T,U>::value {T and U are the same type}
  - ... and many more
- Concepts describe the requirements on a type
  - Your functions and classes works with certain type of types
  - Your functions and classes model some concepts
  - Especially useful for templates

Object Construction in C++11
- Introduced the {} syntax for initialization
- Typically () and {} are the same
  - But there are corner cases:
  - Empty {} and ()
  - Special types like aggregates
  - Initializer lists
  - implicit conversions


```cpp
struct A{
    A(int a, float b);
};
int main(){
    A x(42,3.14); // Direct initialization
    A y{42,3.14}; // Copy initialization
}
```

```cpp

struct A{
    A();
    A(int a, float b);
};

int main(){
    A x(); // Most vexing parse
    A y{}; // Value initialization
    A z; // Default initialization
}
```

```cpp
struct B{
    B(char c){}
}
int main(){
    char c1 =32;
    char c2 = 33;
    B x(c1 + c2); // Ok
    B y{c1 + c2}; // Error
}
```

