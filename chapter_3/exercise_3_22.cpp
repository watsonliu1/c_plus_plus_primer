#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> text = {"hello", "world", "", "my name is watson"};
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        for (auto &c : *it)
        {
            c = toupper(c);
        }

        cout << *it << endl;
    }

    return 0;
}