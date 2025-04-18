#include <iostream>

bool isPalindrome(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str[str.length() - i - 1])
            return false;
    }
    return true;
}

int main()
{
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    int count = 0;
    std::cout << "[";
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 1; j <= str.length() - i; j++)
        {
            std::string substr = str.substr(i, j);
            if (isPalindrome(substr))
            {
                if (count == 0)
                {
                    std::cout << "'" << substr << "'";
                }
                else
                {
                    std::cout << ", '" << substr << "'";
                }
                count++;
            }
        }
    }
    std::cout << "]";
    return 0;
}