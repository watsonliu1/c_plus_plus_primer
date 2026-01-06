#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
    char ch = 0;
    int vowelCnt = 0;

    while (cin >> ch)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowelCnt++;
        }
    }
    cout << "Number of vowels: " << vowelCnt << std::endl;

    return 0;
}