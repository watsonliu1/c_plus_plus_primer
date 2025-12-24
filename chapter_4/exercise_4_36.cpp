#include <iostream>

using std::cout;
using std::endl;

using std::string;
using std::vector;

int main()
{
    int i = 42;
    double d = 3.14;

    i *= static_cast<int>(d);
    cout << "i = " << i << endl;
    return 0;
}