#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int num = 9;
    if (num % 2 == 0)
    {
        cout << num << " is even" << endl;
    }
    else
    {
        cout << num << " is odd" << endl;
    }
    return 0;
}