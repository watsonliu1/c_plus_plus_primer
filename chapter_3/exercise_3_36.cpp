#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4};

    // 判断两个数组是否相等
    auto size1 = sizeof(arr1) / sizeof(arr1[0]);
    auto size2 = sizeof(arr2) / sizeof(arr2[0]);

    if (size1 != size2)
    {
        cout << "not equal" << endl;
        return 0;
    }

    for (size_t i = 0; i < size1; i++)
    {
        if (arr1[i] != arr2[i])
        {
            cout << "not equal" << endl;
            return 0;
        }
    }

    cout << "equal" << endl;

#if 0
    // 判断两个 vector 是否相等
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {1, 2, 3};
    if (v1 == v2)
    {
        cout << "v1 and v2 are equal" << endl;
    }
    else
    {
        cout << "v1 and v2 are not equal" << endl;
    }
#endif

    return 0;
}