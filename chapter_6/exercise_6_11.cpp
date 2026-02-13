#include <iostream>
using std::cout;
using std::endl;
using std::string;

void reset(int &i)
{
    i = 0;
}

int main()
{
    int j = 42;
    reset(j);
    cout << "j = " << j << endl;

    return 0;
}