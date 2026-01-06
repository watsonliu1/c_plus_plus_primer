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
    int blankCnt = 0;
    int tabCnt = 0;
    int newlineCnt = 0;

    while (cin >> ch)
    {
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vowelCnt++;
            break;
        case ' ':
            blankCnt++;
            break;
        case '\t':
            tabCnt++;
            break;
        case '\n':
            newlineCnt++;
            break;

        default:
            break;
        }
    }
    cout << "Number of vowels: " << vowelCnt << std::endl;
    cout << "Number of blanks: " << blankCnt << std::endl;
    cout << "Number of tabs: " << tabCnt << std::endl;
    cout << "Number of newlines: " << newlineCnt << std::endl;
    return 0;
}