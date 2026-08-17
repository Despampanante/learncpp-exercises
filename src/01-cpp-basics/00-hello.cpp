#include <iostream>

void foo(int)
{
}

int main()
{
    std::cout << "learncpp-exercises build OK\n";
    std::cout << "learncpp-exercises build OK\n";

    // Making this unsigned produces an warning. If enviorment/build flags are properly set it will throw an error during compilation
    int x {5};
    foo(x);

    return 0;
}

