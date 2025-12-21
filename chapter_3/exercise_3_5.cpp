#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string word;
    string total;

    while (cin >> word)
    {
        // total += word;
        if (!total.empty())
        {
            total = total + " " + word;
        }
        else
        {
            total = word;
        }
    }

    cout << total << endl;

    return 0;
}