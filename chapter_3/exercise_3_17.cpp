#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> v;
    string word;
    while (cin >> word)
    {
        v.push_back(word);
    }

    for (auto &s : v)
    {
        for (char &c : s)
        {
            c = toupper(c);
        }
    }

    for (auto s : v)
    {
        cout << s << endl;
    }

    return 0;
}