#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r; // a: int

    const int ci = i, &cr = ci;
    auto b = ci;  // b: int
    auto c = cr;  // c: int
    auto d = &i;  // d: int *
    auto e = &ci; // e: const int *
    auto &g = ci; // g: const int &
    a = 42;
    b = 42;
    c = 42;
    // d = 42;
    // e = 42;
    // g = 42;

    return 0;
}