# Chapter F Review

A **constexpr function** is a function that is allowed to be called in a constant expression. To make a function a constexpr function, we simply use the `constexpr` keyword in front of the return type. Constexpr functions are only guaranteed to be evaluated at compile-time when used in a context that requires a constant expression. Otherwise they may be evaluated at compile-time (if eligible) or runtime. Constexpr functions are implicitly inline, and the compiler must see the full definition of the constexpr function to call it at compile-time.

A **consteval function** is a function that must evaluate at compile-time. Consteval functions otherwise follow the same rules as constexpr functions.
