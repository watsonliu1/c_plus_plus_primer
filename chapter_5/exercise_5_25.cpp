#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;
using std::string;
using std::vector;

double myDiv(int a, int b)
{
    if (b == 0)
    {
        throw runtime_error("除数不能为0!");
    }
    return static_cast<double>(a) / b;
}

int main()
{
    int num1 = 0, num2 = 0;
    char c = 'y';
    while (c == 'y')
    {
        cin >> num1 >> num2;
        try
        {
            cout << myDiv(num1, num2) << endl;
            break;
        }
        catch (runtime_error err)
        {
            cout << err.what() << "\nTry Again? Enter y or n" << endl;
            cin >> c;
            if (c != 'y')
            {
                break;
            }
        }
    }

    return 0;
}