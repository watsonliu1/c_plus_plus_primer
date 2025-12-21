#include <iostream>
#include <iterator>
#include <cstring>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::string;
using std::vector;

int main()
{
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // for (size_t i = 0; i != rowCnt; ++i)
    // {
    //     for (size_t j = 0; j != colCnt; ++j)
    //     {
    //         ia[i][j] = i * colCnt + j;
    //     }
    // }

    // size_t cnt = 0;
    // for (auto &row : ia)
    // {
    //     for (auto &col : row)
    //     {
    //         col = cnt;
    //         ++cnt;
    //     }
    // }

    // for (auto &row : ia)
    // {
    //     for (auto col : row)
    //     {
    //         cout << col << endl;
    //     }
    // }
    using int_array = int[4];

    for (int_array *p = ia; p != ia + 3; ++p)
    {
        for (int *q = *p; q != *p + 4; ++q)
        {
            cout << *q << " ";
        }
    }
    cout << endl;

    for (auto p = ia; p != ia + 3; ++p)
    {
        cout << "&p:" << p << endl;
        for (auto q = *p; q != *p + 4; ++q)
        {
            cout << "&q:" << q << endl;
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}