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
    string s1("hello");
    string s2 = "hello";
    if (s1 == s2)
    {
        cout << "s1 and s2 are equal" << endl;
    }
    else if (s1 < s2)
    {
        cout << "s1 <s2 " << endl;
    }
    else
    {
        cout << "s1 >s2 " << endl;
    }

    char s3[] = "world";
    char s4[] = "world";
    if (strcmp(s3, s4) == 0)
    {
        cout << "s3 and s4 are equal" << endl;
    }
    else if (strcmp(s3, s4) < 0)
    {
        cout << "s3 < s4" << endl;
    }
    else
    {
        cout << "s3 > s4" << endl;
    }
    return 0;
}