#include <iostream>
#define NDEBUG

#include <cassert>

using std::cout;
using std::endl;
using std::string;
using std::vector;

// Func是函数类型
typedef bool Func(const string &, const string &);

// FuncP是函数指针类型
typedef bool (*FuncP)(const string &, const string &);

void useBigger(const string &s1, const string &s2, Func);

using F = int(int *, int);
using PF = int (*)(int *, int);

PF f1(int);
// F f2(int);
F *f3(int);

auto f4(int) -> int (*)(int *, int);

int main(int argc, char **argv)
{

    return 0;
}
