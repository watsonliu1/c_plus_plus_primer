#ifndef SALES_ITEM_H
#define SALES_ITEM_H

#include <iostream>   // 用于输入输出流（cin/cout）
#include <string>     // 用于处理 ISBN 字符串
#include <utility>    // 用于 std::pair（可选，此处用于存储销量和单价）
#include <stdexcept>  // 用于异常处理（如无效数据抛出）

// 销售商品类：封装单种商品的销售信息及业务逻辑
class Sales_item {
private:
    // 私有成员变量：存储核心数据，外部通过公有接口访问
    std::string isbn_;          // 商品唯一标识（ISBN/条形码）
    unsigned units_sold_ = 0;   // 已售数量（默认初始化为 0）
    double revenue_ = 0.0;      // 总销售额（默认初始化为 0.0）

    // 私有辅助函数：计算单价（内部逻辑封装，外部无需关心）
    double price() const {
        // 若销量为 0，返回 0（避免除以 0 错误）
        return units_sold_ == 0 ? 0.0 : revenue_ / units_sold_;
    }

public:
    // -------------------------- 1. 构造函数 --------------------------
    // 默认构造函数：创建空的销售记录
    Sales_item() = default;

    // 仅 ISBN 构造：创建指定 ISBN、销量和销售额为 0 的记录
    explicit Sales_item(const std::string& isbn) 
        : isbn_(isbn), units_sold_(0), revenue_(0.0) {}

    // 完整参数构造：ISBN + 销量 + 单价（自动计算销售额）
    Sales_item(const std::string& isbn, unsigned units_sold, double price)
        : isbn_(isbn), units_sold_(units_sold) {
        // 校验输入合法性：销量非负、单价非负
        if (units_sold < 0) {
            throw std::invalid_argument("销量不能为负数");
        }
        if (price < 0.0) {
            throw std::invalid_argument("单价不能为负数");
        }
        revenue_ = units_sold * price;  // 自动计算总销售额
    }

    // 拷贝构造函数（默认生成即可满足需求，显式声明增强可读性）
    Sales_item(const Sales_item& other) = default;

    // 移动构造函数（优化临时对象拷贝效率）
    Sales_item(Sales_item&& other) noexcept = default;


    // -------------------------- 2. 赋值运算符 --------------------------
    // 拷贝赋值运算符
    Sales_item& operator=(const Sales_item& other) = default;

    // 移动赋值运算符
    Sales_item& operator=(Sales_item&& other) noexcept = default;


    // -------------------------- 3. 析构函数 --------------------------
    // 无动态内存分配，默认析构即可
    ~Sales_item() = default;


    // -------------------------- 4. 公有接口（数据访问） --------------------------
    // 获取 ISBN（只读）
    std::string isbn() const { return isbn_; }

    // 获取已售数量（只读）
    unsigned units_sold() const { return units_sold_; }

    // 获取总销售额（只读）
    double revenue() const { return revenue_; }

    // 设置销量（带合法性校验）
    void set_units_sold(unsigned units) {
        if (units < 0) {
            throw std::invalid_argument("销量不能为负数");
        }
        units_sold_ = units;
        // 重新计算销售额（基于当前单价）
        revenue_ = units_sold_ * price();
    }

    // 设置单价（带合法性校验，自动更新销售额）
    void set_price(double p) {
        if (p < 0.0) {
            throw std::invalid_argument("单价不能为负数");
        }
        revenue_ = units_sold_ * p;  // 重新计算销售额
    }


    // -------------------------- 5. 业务逻辑运算符 --------------------------
    // 1. 合并销售记录（同一 ISBN 才能合并，累加销量和销售额）
    Sales_item& operator+=(const Sales_item& rhs) {
        // 校验 ISBN 是否一致（不同商品不能合并）
        if (isbn_ != rhs.isbn_) {
            throw std::logic_error("合并失败：两记录 ISBN 不一致");
        }
        // 累加销量和销售额
        units_sold_ += rhs.units_sold_;
        revenue_ += rhs.revenue_;
        return *this;  // 支持链式操作（如 a += b += c）
    }

    // 2. 判断两个记录是否属于同一商品（ISBN 相等即视为同一商品）
    bool operator==(const Sales_item& rhs) const {
        return isbn_ == rhs.isbn_;
    }

    // 3. 判断两个记录是否不属于同一商品（== 的逆运算）
    bool operator!=(const Sales_item& rhs) const {
        return !(*this == rhs);
    }


    // -------------------------- 6. 友元函数（输入输出） --------------------------
    // 友元：允许外部函数直接访问私有成员（避免多轮接口调用）
    // 输出销售记录：格式为 "ISBN 销量 单价 总销售额"
    friend std::ostream& operator<<(std::ostream& os, const Sales_item& item) {
        os << item.isbn_ << " " 
           << item.units_sold_ << " " 
           << item.price() << " " 
           << item.revenue_;
        return os;
    }

    // 输入销售记录：格式需与输出对应（ISBN 销量 单价）
    friend std::istream& operator>>(std::istream& is, Sales_item& item) {
        std::string isbn;
        unsigned units;
        double price;

        // 读取输入数据（若读取失败，item 状态不变）
        if (is >> isbn >> units >> price) {
            // 校验输入合法性
            if (units < 0) {
                is.setstate(std::ios_base::failbit);  // 设置流状态为失败
                throw std::invalid_argument("输入的销量不能为负数");
            }
            if (price < 0.0) {
                is.setstate(std::ios_base::failbit);
                throw std::invalid_argument("输入的单价不能为负数");
            }
            // 更新 item 数据
            item.isbn_ = isbn;
            item.units_sold_ = units;
            item.revenue_ = units * price;
        }
        return is;
    }
};

// -------------------------- 7. 非成员运算符（全局函数） --------------------------
// 合并两个销售记录（基于 += 实现，返回新对象）
inline Sales_item operator+(const Sales_item& lhs, const Sales_item& rhs) {
    Sales_item temp(lhs);  // 拷贝 lhs 到临时对象
    temp += rhs;           // 调用 += 合并 rhs
    return temp;           // 返回合并后的临时对象
}

#endif  // SALES_ITEM_H