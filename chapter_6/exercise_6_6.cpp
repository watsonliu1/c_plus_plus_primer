#include <iostream>
using namespace std;

// 形参：param；局部变量：local_var；局部静态变量：static_local
int var_demo(int param)
{                                // param是形参
    int local_var = 0;           // 局部变量（自动变量），每次调用重新初始化为0
    static int static_local = 0; // 局部静态变量，仅第一次调用初始化

    local_var++;    // 局部变量每次调用都从0开始加1
    static_local++; // 静态变量保留上一次调用后的值，持续累加
    cout << "形参param：" << param
         << " | 局部变量local_var：" << local_var
         << " | 局部静态变量static_local：" << static_local << endl;

    return param + local_var + static_local;
}

int main()
{
    // 多次调用函数，观察三种变量的表现
    var_demo(10);
    var_demo(20);
    var_demo(30);
    return 0;
}