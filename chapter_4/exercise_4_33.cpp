#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int x = 0, y = 0;
    int someValue = 1;
    someValue ? ++x, ++y : --x, --y; // 等价于 (someValue ? (++x, ++y) : --x), --y;

    cout << "x: " << x << ", y: " << y << endl;

    return 0;
}