#include <iostream>
#include <set>

bool is_anagram(std::string str1, std::string str2)
{
    if (str1.length() != str2.length())
        return false;
    std::set<char> a;
    std::set<char> b;
    for (int i = 0; i < str1.length(); i++)
    {
        a.insert(str1[i]);
        b.insert(str2[i]);
    }

    return (a == b);
}

int main()
{
    std::string a = "triangle";
    std::string b = "integral";
    std::cout << is_anagram(a, b);
    return 0;
}