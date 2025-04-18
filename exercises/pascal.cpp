#include <iostream>
#include <cctype>

std::string pascal_case(std::string str)
{
    std::string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0)
        {
            if (isalpha(str[i]) && !(isspace(str[i])))
            {
                result += toupper(str[i]);
                continue;
            }
            continue;
        }
        if (i > 0)
        {
            if (isspace(str[i - 1]) && isalpha(str[i]))
            {
                result += toupper(str[i]);
                continue;
            }
            if (!(isspace(str[i]) && isspace(str[i + 1])))
            {
                if (result.length() > 0) {
                    result += str[i];
                }
            }
        }
    }
    return result;
}

int main()
{
    std::string input = "";
    std::cout << "Enter a string: ";
    getline(std::cin, input);
    std::cout << "Output: " << pascal_case(input);
    return 0;
}