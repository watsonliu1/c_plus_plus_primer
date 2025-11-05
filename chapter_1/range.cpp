#include <iostream>

int main()
{
    int min = 0, max = 0, temp = 0;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> min >> max;
    if (min > max)
    {
        temp = min;
        min = max;
        max = temp;
    }
    while (min <= max)
    {
        std::cout << min << std::endl;
        ++min;
    }
    
    return 0;
}