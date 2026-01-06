#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::string;
using std::vector;

bool is_prefix(const vector<int> &v1, const vector<int> &v2)
{
    auto v1_size = v1.size();
    auto v2_size = v2.size();
    auto min_size = v1_size < v2_size ? v1_size : v2_size;

    for (decltype(min_size) i = 0; i != min_size; ++i)
    {
        if (v1[i] != v2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> v1 = {0, 1, 1, 2};
    vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};

    if (is_prefix(v1, v2))
    {
        std::cout << "v1 is a prefix of v2 or v2 is a prefix of v1" << std::endl;
    }
    else
    {
        std::cout << "v1 is not a prefix of v2 or v2 is not a prefix of v1" << std::endl;
    }

    return 0;
}