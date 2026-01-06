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
    char preChar = 0;
    char currChar = 0;

    int ffCount = 0;
    int flCount = 0;
    int fiCount = 0;

    cin >> ch;
    preChar = ch;

    while (cin >> ch)
    {
        if (preChar == 'f')
        {
            if (ch == 'f')
            {
                ffCount++;
            }
            else if (ch == 'l')
            {
                flCount++;
            }
            else if (ch == 'i')
            {
                fiCount++;
            }
        }
        preChar = ch;
    }
    cout << "Number of ff: " << ffCount << std::endl;
    cout << "Number of fl: " << flCount << std::endl;
    cout << "Number of fi: " << fiCount << std::endl;

    return 0;
}