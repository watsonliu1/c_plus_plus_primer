#include <iostream>

using std::cout;
using std::endl;
using std::string;

void f()
{
    cout << "f() called" << endl;
}

void f(int)
{
    cout << "f(int) called" << endl;
}

void f(int, int)
{
    cout << "f(int, int) called" << endl;
}

void f(double, double = 3.14)
{
    cout << "f(double, double) called" << endl;
}

int main()
{
    // f(5.6);
    // f(42, 2.56);

    // f(2.56, 42);
    // f(42);
    // f(42, 0);
    f(2.56, 3.14);
    return 0;
}