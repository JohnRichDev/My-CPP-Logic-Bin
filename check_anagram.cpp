#include <iostream>
#include <algorithm>

bool is_anagram(std::string str1, std::string str2)
{
    if (str1.length() != str2.length())
        return false;

    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    return (str1 == str2);
}

int main()
{
    std::string a = "bbcc";
    std::string b = "ccbc";
    std::cout << is_anagram(a, b);
    return 0;
}