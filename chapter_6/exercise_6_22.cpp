#include <iostream>

void swap(int *&pa, int *&pb)
{
    int *temp = pa;
    pa = pb;
    pb = temp;
}

int main()
{
    return 0;
}
