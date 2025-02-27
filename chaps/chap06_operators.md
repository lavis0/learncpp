# Chapter 6 Summary

Always use **parentheses** to disambiguate the precedence of operators if there is any question or opportunity for confusion.
The **arithmetic operators** all work like they do in normal mathematics. The **remainder (%)** operator returns the remainder from an integer division.
The **increment and decrement operators** can be used to easily increment or decrement numbers. Avoid the postfix versions of these operators whenever possible.
Beware of **side effects**, particularly when it comes to the order that function parameters are evaluated. Do not use a variable that has a side effect applied more than once in a given statement.
The **comma operator** can compress multiple statements into one. Writing the statements separately is usually better.
The **conditional operator** (`?:`) (also sometimes called the **arithmetic if** operator) is a ternary operator. Given `c ? x : y`, if `c` evaluates to `true` then `x` is evaluated, otherwise `y` is evaluated. Parenthesize:

- The entire operator when used in compound expressions
- The condition if it contains any operators

**Relational operators** can compare floating point numbers, but avoid equality/inequality checks.
**Logical operators** allow formation of compound conditional statements.
