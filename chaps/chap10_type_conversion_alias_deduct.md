# Chapter 10 Summary

The process of converting a value from one data type to another data type is called a **type conversion**.

## The standard conversions

| Category                | Description                                                                 | Notes                                      |
|-------------------------|-----------------------------------------------------------------------------|--------------------------------------------|
| Numeric promotions      | Conversions of small integral types to int or unsigned int and float to double | [10.2 -- Floating-point and integral promotion](https://www.learncpp.com/cpp-tutorial/floating-point-and-integral-promotion/) |
| Numeric conversions     | Other integral and floating point conversions that aren't promotions        | [10.3 -- Numeric conversions](https://www.learncpp.com/cpp-tutorial/numeric-conversions/)                |
| Qualification conversions | Conversions that add or remove const or volatile                          | Not covered                                |
| Value transformations   | Conversions that change the value category of an expression                | [12.2 -- Value categories (lvalues and rvalues)](https://www.learncpp.com/cpp-tutorial/value-categories-lvalues-and-rvalues/) |
| Pointer conversions     | Conversions from std::nullptr to pointer types, or pointer types to other pointer types | Not covered                |

See a [full list of C++23 standard conversions](chap10/full_list__standard_conversions.md).

**Implicit type conversion** (also called **automatic type conversion** or **coercion**) is performed whenever one data type is expected, but a different data type is supplied. If the compiler can figure out how to do the conversion between the two types, it will. If it doesn't know how, then it will fail with a compile error.

The C++ language defines a number of built-in conversions between its fundamental types (as well as a few conversions for more advanced types) called **standard conversions**. These include numeric promotions, numeric conversions, and arithmetic conversions.

A **numeric promotion** is the conversion of certain smaller numeric types to certain larger numeric types (typically `int` or `double`), so that the CPU can operate on data that matches the natural data size for the processor. Numeric promotions include both integral promotions and floating-point promotions. Numeric promotions are **value-preserving**, meaning there is no loss of value or precision. Not all widening conversions are promotions.

A **numeric conversion** is a type conversion between fundamental types that isn't a numeric promotion. A **narrowing conversion** is a numeric conversion that may result in the loss of value or precision.

In C++, certain binary operators require that their operands be of the *same common type*. If operands of different types are provided, one or both of the operands will be implicitly converted to matching types using a set of rules called the **usual arithmetic conversions**.

**Explicit type conversion** is performed when the programmer explicitly requests conversion via a cast. A **cast** represents a request by the programmer to do an explicit type conversion. C++ supports 5 types of casts: `C-style casts`, `static casts`, `const casts`, `dynamic casts`, and `reinterpret casts`. Generally you should avoid `C-style casts`, `const casts`, and `reinterpret casts`.

`static_cast` is used to convert a value from one type to a value of another type, and is by far the most used cast in C++. Prefer using it and use in cases when there would otherwise be implicit casting.

## Type aliases

**Typedefs** and **type aliases** allow the programmer to create an alias for a data type. These aliases are not new types, and act identically to the aliased type. Typedefs and type aliases do not provide any kind of type safety, and care needs to be taken to not assume the alias is different than the type it is aliasing.

The **auto** keyword has a number of uses. First, auto can be used to do **type deduction** (also called **type inference**), which will deduce a variable's type from its initializer. Type deduction drops const and references, so be sure to add those back if you want them.

Auto can also be used as a function return type to have the compiler infer the function's return type from the function's return statements, though this should be avoided for normal functions. Prefer explicit return types over return type deduction (except in cases where the return type is unimportant, difficult to express, or fragile). Auto is used as part of the **trailing return syntax**. For example:
`auto toString(char x, char y) -> string`
