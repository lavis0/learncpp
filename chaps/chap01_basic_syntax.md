# Chapter 1 Summary

A **statement** is a type of instruction that causes the program to perform some action. Statements are often terminated by a semicolon.

A **function** is a collection of statements that execute sequentially. Every C++ program must include a special function named **main**. When you run your program, execution starts at the top of the main function.

In programming, the name of a function (or object, type, template, etc.) is called its **identifier**.

The rules that govern how elements of the C++ language are constructed is called **syntax**. A **syntax error** occurs when you violate the grammatical rules of the language.

**Comments** allow the programmer to leave notes in the code. C++ supports two types of comments:

- Line comments start with `//`
- Block comments use `/* */`

**Data** is any information that can be processed by a computer. A single piece of data is called a **value**.

A **variable** is created using a **definition statement**. When defined, variables are **instantiated** (assigned memory addresses).

A **data type** tells the compiler how to interpret data. An **integer** is a number without fractional components.

**Initialization** specifies an initial value for an object. C++ supports 6 initialization types:

| Initialization Type          | Example       | Note                          |
|-------------------------------|---------------|-------------------------------|
| Default-initialization        | `int x;`      | Indeterminate value           |
| Copy-initialization           | `int x = 5;`  |                               |
| Direct-initialization         | `int x(5);`   |                               |
| Direct-list-initialization    | `int x{5};`   | No narrowing conversions       |
| Copy-list-initialization      | `int x = {5};`| No narrowing conversions       |
| Value-initialization          | `int x{};`    | Zero-initialization           |

**std::cout** and `operator<<` handle console output. **std::endl** flushes output while `'\n'` does not.

An **uninitialized variable** causes **undefined behavior** if accessed. C++ **keywords** cannot be used as identifiers.

A **literal constant** is a fixed value in source code (e.g., `5`, `"Hello"`).

**Operations** involve operands and operators:

- **Unary**: 1 operand
- **Binary**: 2 operands
- **Ternary**: 3 operands
- **Nullary**: 0 operands

An **expression** produces a single value through evaluation. An **expression statement** adds a semicolon to an expression.
