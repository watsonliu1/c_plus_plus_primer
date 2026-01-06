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
    string curr_word;
    string prev_word;

    bool has_duplicate = false;

    if (!(cin >> prev_word))
    {
        cout << "No input!" << endl;
        return -1;
    }

    while (cin >> curr_word)
    {
        if (curr_word == prev_word)
        {
            has_duplicate = true;
            break;
        }
        else
        {
            prev_word = curr_word;
        }
    }

    if (has_duplicate)
    {
        cout << "The word \"" << curr_word << "\" is repeated." << endl;
    }
    else
    {

        cout << "No word was repeated." << endl;
    }

    return 0;
}