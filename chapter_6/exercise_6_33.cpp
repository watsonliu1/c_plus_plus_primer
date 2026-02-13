#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void printVector(const vector<string> &vec, vector<string>::const_iterator it)
{
    if (it != vec.cend())
    {
        cout << *it << " ";
        printVector(vec, ++it);
    }
}

int main()
{
    vector<string> vec{"a", "b", "c", "d", "e"};
    printVector(vec, vec.cbegin());
    cout << endl;
    return 0;
}
