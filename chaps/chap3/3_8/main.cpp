// Watching a variable can allow us to see how a value changes.
// We can also evaluate our variable in our watch window to produce a new value.

// We can already see our local variables.

#include <iostream>

int main()
{
    int x{1};
    std::cout << x << ' ';

    x = x + 2;
    std::cout << x << ' ';

    x = x + 3;
    std::cout << x << ' ';

    return 0;
}
