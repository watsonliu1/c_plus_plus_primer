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
    char s1[] = "hello";
    char s2[] = "world";
    char s3[20] = {};
    strcpy(s3, s1);
    strcat(s3, s2);

    cout << s3 << endl;

    return 0;
}