#include <iostream>
#include <vector>
#include <string>

#define NDEBUG

using std::cout;
using std::endl;
using std::string;
using std::vector;

void printVector(const vector<string> &vec, size_t index)
{
#ifndef NDEBUG
    cout << "Debug: vector size: " << vec.size() << " current index: " << index << " ";
#endif

    if (index == vec.size())
    {
        return;
    }
    cout << vec[index] << " " << endl;
    printVector(vec, index + 1);
}

int main()
{
    vector<string> vec{"a", "b", "c", "d", "e"};
    printVector(vec, 0);
    cout << endl;
    return 0;
}
