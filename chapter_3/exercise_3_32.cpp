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

    int arr_copy[10] = {};
    for (size_t i = 0; i < 10; i++)
    {
        arr_copy[i] = arr[i];
    }

    vector<int> vec(10);
    for (decltype(vec.size()) i = 0; i < vec.size(); i++)
    {
        vec[i] = i;
    }

    vector<int> vec_copy(10);
    vec_copy = vec;

    return 0;
}