#include <iostream>

using std::cout;
using std::endl;

using std::string;
using std::vector;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    for (auto &num : vec)
    {
        num = (num % 2 == 1) ? num * 2 : num;
    }

    for (auto &num : vec)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}