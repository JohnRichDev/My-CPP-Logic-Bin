#include <iostream>
#include <cmath>

double percentage_of_char(std::string s, char c)
{
    double c_count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
            c_count++;
    }

    return (c_count / s.length()) * 100;
}

int main()
{
    std::string s;
    char c;
    std::cout << "Enter the string s: ";
    std::getline(std::cin, s);
    std::cout << "Enter the character c: ";
    std::cin >> c;
    std::cout << "Percentage of character '" << c << "' in the string: " << floor(percentage_of_char(s, c)) << "%";
}