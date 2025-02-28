# The usual arithmetic conversion rules

The usual arithmetic conversion rules are somewhat complex, so we’ll simplify a bit. The compiler has a ranked list of types that looks something like this:

1. long double (highest rank)
2. double
3. float
4. long long
5. long
6. int (lowest rank)

The following rules are applied to find a matching type:

1. If one operand is an integral type and the other a floating point type, the integral operand is converted to the type of the floating point operand (no integral promotion takes place). Otherwise, any integral operands are numerically promoted.

2. After promotion, if one operand is signed and the other unsigned, special rules apply (see below)
Otherwise, the operand with lower rank is converted to the type of the operand with higher rank.
