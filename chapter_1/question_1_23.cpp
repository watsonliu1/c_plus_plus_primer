#include <iostream>
#include "Sales_item.h"
#include <map>

int main()
{
    std::map<std::string, int> isbn_count; // 存储ISBN及其对应的销售数量
    Sales_item trans;

    while (std::cin >> trans)
    {
        ++isbn_count[trans.isbn()]; // 增加对应ISBN的销售数量       
    }

    for (const auto &pair : isbn_count)
    {
        std::cout << "ISBN: " << pair.first << " 销售数量: " << pair.second << std::endl;
    }

    return 0;
}