# Chapter 4 Summary

The smallest unit of memory is a **binary digit**, also called a **bit**. The smallest unit amount of memory that can be addressed (accessed) directly is a **byte**. The modern standard is that a byte equals 8 bits.

A **data type** tells the compiler how to interpret the contents of memory in some meaningful way.

C++ comes with support for many fundamental data types, including floating point numbers, integers, boolean, chars, null pointers, and void.

**Void** is used to indicate no type. It is primarily used to indicate that a function does not return a value.

Different types take different amounts of memory, and the amount of memory used may vary by machine.

The **sizeof** operator can be used to return the size of a type in bytes.

**Signed integers** are used for holding positive and negative whole numbers, including 0. The set of values that a specific data type can hold is called its **range**. When using integers, keep an eye out for overflow and integer division problems.

**Unsigned integers** only hold positive numbers (and 0), and should generally be avoided unless you're doing bit-level manipulation.

**Fixed-width integers** are integers with guaranteed sizes, but they may not exist on all architectures. The fast and least integers are the fastest and smallest integers that are at least some size.

`std::int8_t` and `std::uint8_t` should generally be avoided, as they tend to behave like chars instead of integers.

**size_t** is an unsigned integral type that is used to represent the size or length of objects.

**Scientific notation** is a shorthand way of writing lengthy numbers. C++ supports scientific notation in conjunction with floating point numbers. The digits in the significand (the part before the e) are called the **significant digits**.

**Floating point** is a set of types designed to hold real numbers (including those with a fractional component). The **precision** of a number defines how many significant digits it can represent without information loss. A **rounding error** can occur when too many significant digits are stored in a floating point number that can't hold that much precision.

The **Boolean** type is used to store a `true` or `false` value.

**If statements** allow us to execute one or more lines of code if some condition is true. An **else statement** can be used to execute a statement when a prior if-statement condition evaluates to false.

**Char** is used to store values that are interpreted as an ASCII character. Printing a char as an integer value requires use of `static_cast`.

## Fundamental data types

### Types and ranges

| Types                                                                 | Category             | Meaning                              | Example     |
|-----------------------------------------------------------------------|----------------------|--------------------------------------|-------------|
| float<br>double<br>long double                                       | Floating Point       | a number with a fractional part      | 3.14159     |
| bool                                                                 | Integral (Boolean)   | true or false                        | true        |
| char<br>wchar_t<br>char8_t (C++20)<br>char16_t (C++11)<br>char32_t (C++11) | Integral (Character) | a single character of text          | 'c'         |
| short int<br>int<br>long int<br>long long int (C++11)                | Integral (Integer)   | positive/negative whole numbers + 0  | 64          |
| std::nullptr_t (C++11)                                               | Null Pointer         | a null pointer                       | nullptr     |
| void                                                                 | Void                 | no type                              | n/a         |

### Types and sizes

| Category        | Type           | Minimum Size       | Typical Size          |
|-----------------|----------------|--------------------|-----------------------|
| Boolean         | bool           | 1 byte             | 1 byte                |
| Character       | char           | 1 byte (exactly)   | 1 byte                |
|                 | wchar_t        | 1 byte             | 2 or 4 bytes          |
|                 | char8_t        | 1 byte             | 1 byte                |
|                 | char16_t       | 2 bytes            | 2 bytes               |
|                 | char32_t       | 4 bytes            | 4 bytes               |
| Integral        | short          | 2 bytes            | 2 bytes               |
|                 | int            | 2 bytes            | 4 bytes               |
|                 | long           | 4 bytes            | 4 or 8 bytes          |
|                 | long long      | 8 bytes            | 8 bytes               |
| Floating point  | float          | 4 bytes            | 4 bytes               |
|                 | double         | 8 bytes            | 8 bytes               |
|                 | long double    | 8 bytes            | 8, 12, or 16 bytes    |
| Pointer         | std::nullptr_t | 4 bytes            | 4 or 8 bytes          |

## Escape sequences

 | Name            | Symbol    | Meaning                                  |
|-----------------|-----------|------------------------------------------|
| Alert           | `\a`      | Makes an alert (e.g., beep)              |
| Backspace       | `\b`      | Moves cursor back one space              |
| Formfeed        | `\f`      | Moves to next logical page               |
| Newline         | `\n`      | Moves cursor to next line                |
| Carriage return | `\r`     | Moves cursor to beginning of line       |
| Horizontal tab  | `\t`      | Prints horizontal tab                    |
| Vertical tab    | `\v`      | Prints vertical tab                      |
| Single quote    | `\'`      | Prints '                                 |
| Double quote    | `\"`      | Prints "                                 |
| Backslash       | `\\`      | Prints \                                 |
| Question mark   | `\?`      | Prints ? (obsolete)                     |
| Octal number    | `\(num)`  | Character from octal value               |
| Hex number      | `\x(num)` | Character from hexadecimal value        |
