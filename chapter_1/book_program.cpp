#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total; // 保存所有交易记录的总和

    if (std::cin >> total)
    { // 读取第一条交易记录
        Sales_item trans; // 保存当前交易记录

        while (std::cin >> trans)
        { 
            // 读取剩余交易记录
            if (total.isbn() == trans.isbn())
            { 
                // ISBN 相同，合并记录
                total += trans;
            }
            else
            { 
                // ISBN 不同，输出当前总和，更新 total
                std::cout << total << std::endl;
                total = trans;  // 更新 total 为当前记录
            }
        }
    
        std::cout << total << std::endl; // 输出最后一组记录的总和
    }
    else
    {
        std::cerr << "No Data?!" << std::endl;
        return -1; // 退出程序，表示失败
    }

    return 0;
}