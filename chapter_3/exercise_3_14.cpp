#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> v;

    int num = 0;
    while (cin >> num)
    {
        v.push_back(num);
    }

    return 0;
}