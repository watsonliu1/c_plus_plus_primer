#include <iostream>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int *beg = begin(arr);
    int *e = end(arr);

    while (beg != e)
    {
        *beg = 0;
        ++beg;
    }

    for (auto i : arr)
    {
        cout << "[" << i << "]";
    }
    cout << endl;

    return 0;
}