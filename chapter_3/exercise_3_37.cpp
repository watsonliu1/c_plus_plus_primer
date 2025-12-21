#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    /**
     * 没有以\0结尾
     */
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;

    while (*cp)
    {
        cout << *cp << endl;
        ++cp;
    }

    return 0;
}