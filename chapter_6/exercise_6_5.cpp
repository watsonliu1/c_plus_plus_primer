#include <iostream>
using std::cout;
using std::endl;

int abs(int num)
{
    if (num < 0)
        return -num;
    else
        return num;
}

int main()
{
    cout << abs(-9) << endl;

    return 0;
}