#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int getsize()
{
    int sz = 0;
    cout << "Please enter a positive integer: " << endl;
    cin >> sz;
    return sz;
}

int main()
{

    int sz = 0;
    do
    {
        sz = getsize();
    } while (sz <= 0);

    return 0;
}
