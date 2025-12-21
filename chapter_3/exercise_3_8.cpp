#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("hello world");

    decltype(s.size()) index = 0;
    // while (index != s.size())
    // {
    //     s[index] = 'X';
    //     index++;
    // }
    for (index = 0; index != s.size(); index++)
    {
        s[index] = 'X';
    }

    cout << s << endl;

    return 0;
}