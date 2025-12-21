#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int num;
    vector<int> vec;
    // 读取输入整数
    while (cin >> num)
    {
        vec.push_back(num);
    }

    // 输出相邻元素的和
    if (!vec.empty())
    {
        cout << "相邻元素的和：";
        for (auto it = vec.cbegin(); it != vec.cend() - 1; ++it)
        {
            cout << *it + *(it + 1) << " ";
        }
        cout << endl;
    }

    // 输出首尾元素的和
    if (!vec.empty())
    {
        cout << "首尾对称元素的和：";
        auto size = vec.cend() - vec.cbegin();
        for (auto it = vec.cbegin(); it != vec.cbegin() + size / 2; ++it)
        {
            cout << *it + *(vec.cend() - (it - vec.cbegin()) - 1) << " ";
        }

        // 奇数个元素时输出中间元素
        if (size % 2 == 1)
        {
            cout << *(vec.cbegin() + size / 2);
        }
        cout << endl;
    }

    return 0;
}