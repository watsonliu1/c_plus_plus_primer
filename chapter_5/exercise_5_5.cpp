#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
    // 表示该容器本身不可修改（无法添加、删除元素）
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

    string lettergrade;
    cout << "Please enter your grade(0-100):";
    int grade = 0;
    cin >> grade;
    if (grade < 60)
        lettergrade = scores[0];
    else
    {
        lettergrade = scores[(grade - 50) / 10];
        if (grade != 100)
        {
            if (grade % 10 > 7)
                lettergrade += '+';
            else if (grade % 10 < 3)
                lettergrade += '-';
        }
    }

    cout << lettergrade << std::endl;

    return 0;
}