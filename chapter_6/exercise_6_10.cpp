#include <iostream>
using std::cout;
using std::endl;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1 = 3, num2 = 5;
    cout << num1 << " " << num2 << endl;
    swap(&num1, &num2);
    cout << num1 << " " << num2 << endl;

    return 0;
}