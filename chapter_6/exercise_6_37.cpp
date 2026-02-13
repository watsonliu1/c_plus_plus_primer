#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// 方式1：使用类型别名
typedef string arrT[10];
arrT &func(int i);

// 方式2：使用尾置返回类型
auto func2(int i) -> string (&)[10];

// 方式3:使用decltype关键字
string arr[10] = {"Hello", "World", "C++14"};
decltype(arr) &func3(int i);

string (&func(int i))[10]
{
    static string a[10];
    return a;
}

int main()
{

    return 0;
}