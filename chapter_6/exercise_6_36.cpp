#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string (&func(int i))[10];

string (&func(int i))[10]
{
    static string a[10];
    return a;
}

int main()
{

    return 0;
}