#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// 判断string对象中是否含有大写字母
bool containsUpper(const string &s)
{
    for (auto &c : s)
    {
        if (isupper(c))
        {
            return true;
        }
    }

    return false;
}

void toLower(string &s)
{
    for (auto &c : s)
    {
        tolower(c);
    }
}

int main()
{

    return 0;
}