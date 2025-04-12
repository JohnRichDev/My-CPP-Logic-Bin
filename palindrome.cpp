#include <iostream>

bool isPalindrome(std::string str)
{
    bool result = true;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i - 1] != str[str.length() - i]) {
            result = false;
            break;
        };
    }

    return result;
}

int main()
{
    std::string str = "racecar";
    std::cout << (isPalindrome(str) ? "yes" : "no");

    return 0;
}