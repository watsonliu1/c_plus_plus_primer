#include <iostream>
using namespace std;

int main()
{
    // 布尔类型
    cout << "bool: " << sizeof(bool) << " 字节" << endl;

    // 字符类型
    cout << "char: " << sizeof(char) << " 字节" << endl;
    cout << "signed char: " << sizeof(signed char) << " 字节" << endl;
    cout << "unsigned char: " << sizeof(unsigned char) << " 字节" << endl;

    // 整型
    cout << "short: " << sizeof(short) << " 字节" << endl;
    cout << "int: " << sizeof(int) << " 字节" << endl;
    cout << "long: " << sizeof(long) << " 字节" << endl;
    cout << "long long: " << sizeof(long long) << " 字节" << endl;
    cout << "unsigned short: " << sizeof(unsigned short) << " 字节" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " 字节" << endl;
    cout << "unsigned long: " << sizeof(unsigned long) << " 字节" << endl;
    cout << "unsigned long long: " << sizeof(unsigned long long) << " 字节" << endl;

    // 浮点类型
    cout << "float: " << sizeof(float) << " 字节" << endl;
    cout << "double: " << sizeof(double) << " 字节" << endl;
    cout << "long double: " << sizeof(long double) << " 字节" << endl;

    // 指针类型
    int *p;
    cout << "int*: " << sizeof(p) << " 字节" << endl;

    return 0;
}