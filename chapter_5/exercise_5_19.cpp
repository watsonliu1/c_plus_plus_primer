#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    do
    {
        string word1;
        string word2;
        cout << "Please enter two words: " << endl;

        if (cin >> word1 >> word2)
        {
            if (word1.size() < word2.size())
            {
                cout << "word1 is shorter than word2" << endl;
            }
            else if (word2.size() < word1.size())
            {
                cout << "word2 is shorter than word1" << endl;
            }
            else
            {
                cout << "word1 is equal to word2" << endl;
            }
        }
    } while (cin);

    return 0;
}