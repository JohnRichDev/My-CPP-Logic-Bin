#include <iostream>
#include <algorithm>
#include <vector>

int vowelCount(std::string str)
{
    int result = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            result++;
    }

    return result;
}

int main()
{
    std::cout << vowelCount("education");

    return 0;
}