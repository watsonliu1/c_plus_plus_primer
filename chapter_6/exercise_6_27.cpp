#include <iostream>
#include <initializer_list>
using std::cout;
using std::endl;
using std::initializer_list;
using std::string;

int sum(initializer_list<int> i)
{
    int sum = 0;
    for (const auto &e : i)
    {
        sum += e;
    }
    return sum;
}

int main()
{
    cout << sum({1, 2, 3, 4, 5}) << endl;

    return 0;
}