#include <iostream>

std::string reverseString(std::string str)
{
    std::string result = "";

    for (int i = str.length(); i > 0; i--)
    {
        result += str[i - 1];
    }

    return result;
}

int main()
{
    std::string str = "hello";
    std::cout << reverseString(str);

    return 0;
}