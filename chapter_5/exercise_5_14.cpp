#include <iostream>
#include <string>
using std::cin;
using std::string;

int main()
{
    string prev_word, curr_word; // 前一个单词、当前单词
    int current_count = 1;       // 当前单词出现次数
    int max_count = 1;           // 出现次数最多的单词的出现次数
    string max_word;             // 出现次数最多的单词

    // 读取第一个单词, 处理输入为空的情况
    if (!(cin >> prev_word))
    {
        std::cout << "No input!" << std::endl;
        return -1;
    }

    // 读取剩余单词
    while (cin >> curr_word)
    {
        if (curr_word == prev_word)
        {
            // 相同单词，出现次数加1
            ++current_count;
        }
        else
        {
            // 不同单词，重置计数器
            prev_word = curr_word;
            current_count = 1;
        }

        // 更新最大出现次数和对应单词
        if (current_count > max_count)
        {
            max_count = current_count;
            max_word = prev_word;
        }
    }

    if (max_count > 1)
    {
        std::cout << "The most frequent word is: " << max_word << std::endl;
        std::cout << "It appears " << max_count << " times." << std::endl;
    }
    else
    {
        std::cout << "No word was repeated." << std::endl;
    }
    return 0;
}