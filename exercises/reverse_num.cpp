#include <iostream>

void reverse_nums(std::string str)
{
    std::string new_str = "";

    for (int i = str.length(); i > 0; i--)
    {
        new_str += str[i - 1];
    }
    std::cout << "Reversed number: " << new_str;
}

int main()
{
    std::string input;
    std::cout << "Enter a number (between 4 and 10 digits): ";
    std::cin >> input;
    reverse_nums(input);
    return 0;
}