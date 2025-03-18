# Polymorphism

Polymorphism is a concept in object oriented programming(OOP) which refers to the ability of a function or an object to exhibit different behaviors based on how it is utilized.

In C++, polymorphism manifests in two major forms:

* Compile time (static) polymorphism
* Runtime (dynamic) polymorphism

## Compile time (static) Polymorphism

* This type of polymorphism occurs during the complilation phase, where the method or function to be executed is determined at compile time.
* It's achieved through method/function overloading or operator overloading.

### Function Overloading

* This allows multiple functions with the same name but different parameters as can be seen in `function_overloading.cpp`.
* In the code in `function_overloading.cpp`, the compiler determines which add function to call based on the argument types. This effectively eliminates the use of multiple function names such as addInt, addDouble etc.
* The result given are: 30, 30.3, and "HelloWorld" respectively.

### Operator Overloading

* This allows redefining operators (e.g. +, -, <<) for custom types
* Although there some exception to this in c++ such as (::, ?:, ., sizeOf)
* In the code in `operator_overloading.cpp`, the operator == is overloaded for the car class to compare two car objects based on there names and cost.

## Runtime (dynamic) Polymorphism

* This type of polymorphism occurs during the program's execution
* it is typically achieved through Function overiding, using inheritance and virtual functions

### Function Overriding

* Function overriding allows a derived class to provide a specific implementation of a function that is already defined in its base class. This is done using virtual functions.

## Folders

* `Compile_Time_(static)_Polymorphism/`: Contains example code demonstrating polymorphism concepts.
* `Runtime_(dynamic)_Polymorphism/`: Contains exercises to practice polymorphism in C++.

## Note

This document contains notes taken for further understanding of the COS 202 course at Miva Open University.
For more detailed information, refer to the [full note here](https://docs.google.com/document/d/1NJsBKrsUcL_uQRIHNTVBjpSuYFAlx8WBLS3VMQWy_jo/edit?usp=sharing).
Or the [Peer to Peer assessment here](https://drive.google.com/file/d/1HfGDE4Kti4Lo4m8JJR8ypFRINUcq6_ka/view?usp=sharing)
