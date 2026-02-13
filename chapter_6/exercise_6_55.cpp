#include <iostream>
#include <vector>

using std::vector;

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

int main()
{
    vector<decltype(add) *> vec;
    vec.push_back(add);
    vec.push_back(subtract);
    vec.push_back(multiply);
    vec.push_back(divide);

    return 0;
}