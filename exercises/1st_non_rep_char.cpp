#include <iostream>
#include <set>

void first_non_rep_chat(std::string str)
{
    int idx = -1;
    char c = str[idx];
    std::set<char> seen;
    for (int i = str.length(); i > 0; i--)
    {
        if (seen.find(str[i - 1]) == seen.end())
        {
            idx = i - 1;
            c = str[i - 1];
        }
        else
        {
            if (c == str[i - 1])
            {
                idx = -1;
                c = '-';
            }
        }
        seen.insert(c);
    }

    if (c != '-')
    {
        std::cout << "(" << idx << ", " << c << ")";
    }
    else
    {
        std::cout << "(" << idx << ", None)";
    }
}

int main()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    first_non_rep_chat(input);
    return 0;
}