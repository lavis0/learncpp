# Testing different categories of input

For **integers**, make sure you’ve considered how your function handles negative values, zero, and positive values. You should also check for overflow if that’s relevant.

For **floating point numbers**, make sure you’ve considered how your function handles values that have precision issues (values that are slightly larger or smaller than expected). Good double type values to test with are `0.1` and `-0.1` (to test numbers that are slightly larger than expected) and `0.7` and `-0.7` (to test numbers that are slightly smaller than expected).

For **strings**, make sure you’ve considered how your function handles an empty string, an alphanumeric string, strings that have whitespace (leading, trailing, and inner), and strings that are all whitespace.

If your function takes a **pointer**, don’t forget to test 'nullptr' as well (don’t worry if this doesn’t make sense, we haven’t covered it yet).
