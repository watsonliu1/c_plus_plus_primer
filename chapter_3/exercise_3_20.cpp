#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int num;
    vector<int> v;
    while (cin >> num)
    {
        v.push_back(num);
    }

    // 输出相邻元素的和
    for (decltype(v.size()) i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] + v[i + 1] << endl;
    }

    // 输出首尾元素的和
    decltype(v.size()) size = v.size();
    for (decltype(v.size()) i = 0; i < size / 2; ++i)
    {
        cout << v[i] + v[size - i - 1] << endl;
    }

    if (size % 2 == 1)
    {
        cout << v[size / 2] << endl;
    }

    return 0;
}