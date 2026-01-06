#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

double myDiv(int a, int b)
{
    return static_cast<double>(a) / b;
}

int main()
{
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;
    cout << myDiv(num1, num2) << endl;

    return 0;
}