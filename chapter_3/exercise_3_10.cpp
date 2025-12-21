#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("hello,+world!");
    string s2;

    for (auto c : s)
    {
        if (!ispunct(c))
        {
            s2 += c;
        }
    }
    s = s2;
    cout << s << endl;

    return 0;
}