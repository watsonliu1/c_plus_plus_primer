#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    // 1
    vector<int> v1;
    cout << "capacity:" << v1.size() << endl;
    for (auto a : v1)
    {
        cout << a << " ";
    }
    cout << endl;

    // 2
    vector<int> v2(10);
    cout << "capacity:" << v2.size() << endl;
    for (auto a : v2)
    {
        cout << a << " ";
    }
    cout << endl;

    // 3
    vector<int> v3(10, 42);
    cout << "capacity:" << v3.size() << endl;
    for (auto a : v3)
    {
        cout << a << " ";
    }
    cout << endl;

    // 4
    vector<int> v4{10};
    cout << "capacity:" << v4.size() << endl;
    for (auto a : v4)
    {
        cout << a << " ";
    }
    cout << endl;

    // 5
    vector<int> v5{10, 42};
    cout << "capacity:" << v5.size() << endl;
    for (auto a : v5)
    {
        cout << a << " ";
    }
    cout << endl;

    // 6
    vector<string> v6{10};
    cout << "capacity:" << v6.size() << endl;
    for (auto a : v6)
    {
        cout << a << " ";
    }
    cout << endl;

    // 7
    vector<string> v7{10, "hi"};
    cout << "capacity:" << v7.size() << endl;
    for (auto a : v7)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}