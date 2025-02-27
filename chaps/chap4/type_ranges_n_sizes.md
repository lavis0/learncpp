# Fundamental data types

## Types and ranges

| Types                                                                 | Category             | Meaning                              | Example     |
|-----------------------------------------------------------------------|----------------------|--------------------------------------|-------------|
| float<br>double<br>long double                                       | Floating Point       | a number with a fractional part      | 3.14159     |
| bool                                                                 | Integral (Boolean)   | true or false                        | true        |
| char<br>wchar_t<br>char8_t (C++20)<br>char16_t (C++11)<br>char32_t (C++11) | Integral (Character) | a single character of text          | 'c'         |
| short int<br>int<br>long int<br>long long int (C++11)                | Integral (Integer)   | positive/negative whole numbers + 0  | 64          |
| std::nullptr_t (C++11)                                               | Null Pointer         | a null pointer                       | nullptr     |
| void                                                                 | Void                 | no type                              | n/a         |

## Types and sizes

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
