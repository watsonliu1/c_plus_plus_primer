#include <iostream>
#include <vector>

using std::vector;

int f1(int, int);

int main()
{
    vector<decltype(f1) *> vec;

    return 0;
}