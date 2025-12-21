#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int arr[10] = {};
    for (size_t i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    // 验证输出
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}