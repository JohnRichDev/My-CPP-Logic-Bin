#include <iostream>
#include <set>
#include <cctype>

bool is_panagram(std::string str)
{
    std::set<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    std::set<char> seen;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            if (seen.find(tolower(str[i])) == seen.end())
            {
                seen.insert(tolower(str[i]));
            }
        }
    }
    return (alphabet == seen);
}

int main()
{
    std::string testcase = "The quick brown fox jumps over the lazy dog";
    std::cout << is_panagram(testcase);
    return 0;
}