#include <iostream>
#include <set>

char first_unique_char(std::string str)
{
    char non_rep = ' ';
    std::set<char> seen;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (seen.find(str[i]) == seen.end())
        {
            non_rep = str[i];
        }
        else
        {
            if (str[i] == non_rep) non_rep = ' ';
        }

        seen.insert(str[i]);
    }

    return non_rep;
}

int main()
{
    std::string testcase = "swiss";
    std::cout << first_unique_char(testcase);
}