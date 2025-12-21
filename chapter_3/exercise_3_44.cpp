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
    using int_array = int[colCnt];

    // 版本1
#if 0

    for (int_array &row : ia)
    {
        for (int col : row)
        {
            cout << col << " ";
        }
    }
    cout << endl;
#endif

    // 版本2
#if 0
    for (size_t i = 0; i < rowCnt; i++)
    {
        for (size_t j = 0; j < colCnt; j++)
        {
            cout << ia[i][j] << " ";
        }
    }
    cout << endl;
#endif

    // 版本3
#if 1
    for (int_array *row = begin(ia); row != end(ia); row++)
    {
        for (int *col = begin(*row); col != end(*row); col++)
        {
            cout << *col << " ";
        }
    }
    cout << endl;
#endif

    return 0;
}