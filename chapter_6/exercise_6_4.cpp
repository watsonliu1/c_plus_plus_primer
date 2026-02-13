#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fact(int val)
{
    int ret = 1;
    while (val > 1)
    {
        ret *= val--;
    }
    return ret;
}

int main()
{
    int num = 0;
    cout << "请输入一个数字" << endl;
    cin >> num;
    cout << num << "! is " << fact(num) << endl;

    return 0;
}