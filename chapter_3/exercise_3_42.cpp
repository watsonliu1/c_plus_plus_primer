#include <iostream>
#include <iterator>
#include <cstring>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> vec = {0, 1, 2, 3, 4, 5};
    int arr[6] = {};
    for (size_t i = 0; i < 6; i++)
    {
        arr[i] = vec[i];
    }

    for (auto num : vec)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}