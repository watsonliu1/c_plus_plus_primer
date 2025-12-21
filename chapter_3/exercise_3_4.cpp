#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    // if (s1 == s2)
    // {
    //     cout << "equal" << endl;
    // }
    // else if (s1 < s2)
    // {
    //     cout << "s2 is bigger" << endl;
    // }
    // else
    // {
    //     cout << "s1 is bigger" << endl;
    // }

    if (s1.size() == s2.size())
    {
        cout << "equal" << endl;
    }
    else if (s1.size() < s2.size())
    {
        cout << "s2 is bigger" << endl;
    }
    else
    {
        cout << "s1 is bigger" << endl;
    }

    return 0;
}