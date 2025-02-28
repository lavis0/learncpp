# Chapter 11 Summary

**Function overloading** allows us to create multiple functions with the same name, so long as each identically named function has different set of parameter types (or the functions can be otherwise differentiated). Such a function is called an **overloaded function** (or **overload** for short). Return types are not considered for differentiation.

- When resolving overloaded functions, if an exact match isn't found, the compiler will favor overloaded functions that can be matched via numeric promotions over those that require numeric conversions. When a function call is made to function that has been overloaded, the compiler will try to match the function call to the appropriate overload based on the arguments used in the function call. This is called **overload resolution**.
- An **ambiguous match** occurs when the compiler finds two or more functions that can match a function call to an overloaded function and can't determine which one is best.

- A **default argument** is a default value provided for a function parameter. Parameters with default arguments must always be the rightmost parameters, and they are not used to differentiate functions when resolving overloaded functions.

For clarity and to produce the correct output, it can be best to use `static_cast` to force our variable into the correct function.

We can also forbid a function to receive a certain call through something link `string toString(char x) = delete;`. Often used through:

`string toString(int x) {..}`&emsp;&emsp;&emsp;&emsp; // *desired behaviour*

`template <typename T>`&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;// *ignore other param types*
`string toString(T x) = delete;`

**Default arguments** are predeclared parameters, such as `string toString(int x = 0)`, and so, unless `x` is specified when called, the function will default to `x=0`. This can be done with multiple arguments, but any parameter further right than this one should also have default arguments. They are typically defaulted in **function forward declarations**, as they can only appear once in a single translation unit, and must exist before called (filled with default argument at the call site, during compile time).

**Function templates** allow us to create a function-like definition that serves as a pattern for creating related functions. In a function template, we use **type template parameters** as placeholders for any types we want to be specified later. The syntax that tells the compiler we're defining a template and declares the template types is called a **template parameter declaration**.

The process of creating functions (with specific types) from function templates (with template types) is called **function template instantiation** (or **instantiation**) for short. When this process happens due to a function call, it's called **implicit instantiation**. An instantiated function is called a **function instance** (or **instance** for short, or sometimes a **template function**).

**Template argument deduction** allows the compiler to deduce the actual type that should be used to instantiate a function from the arguments of the function call. Template argument deduction does not do type conversion.

Template types are sometimes called **generic types**, and programming using templates is sometimes called **generic programming**.

In C++20, when the auto keyword is used as a parameter type in a normal function, the compiler will automatically convert the function into a function template with each auto parameter becoming an independent template type parameter. This method for creating a function template is called an **abbreviated function template**.

A **non-type template parameter** is a template parameter with a fixed type that serves as a placeholder for a constexpr value passed in as a template argument.

A templated function for use in multiple files should exist in a header file.
