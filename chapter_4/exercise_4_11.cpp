#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a = 0, b = 0, c = 0, d = 0;

    cin >> a >> b >> c >> d;

    if (a > b && b > c && c > d)
    {
        cout << "a is the largest" << endl;
    }

    return 0;
}