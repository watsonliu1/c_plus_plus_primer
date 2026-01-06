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
    cin >> num1 >> num2;
    cout << myDiv(num1, num2) << endl;

    return 0;
}