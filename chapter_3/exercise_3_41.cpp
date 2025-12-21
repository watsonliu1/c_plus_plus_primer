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
    int int_arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    vector<int> vec(begin(int_arr), end(int_arr));

    for (auto num : vec)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}