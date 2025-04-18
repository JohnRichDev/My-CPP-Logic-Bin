#include <iostream>
#include <cctype>

void analyzeCharacters(std::string str)
{
    int upper = 0; 
    int lower = 0;
    int digits = 0;
    int special = 0;
    int spaces = 0;
    int sod = 0;

    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) upper++;
        if (islower(str[i])) lower++;
        if (isdigit(str[i])) {
            digits++;
            sod += str[i] - '0';
        };
        if (ispunct(str[i])) special++;
        if (isspace(str[i])) spaces++;
    }

    std::cout << "No. of Upper Case: " << upper << std::endl;
    std::cout << "No. of Lower Case: " << lower << std::endl;
    std::cout << "No. of Integers: " << digits << std::endl;
    std::cout << "No. of Special Characters: " << special << std::endl;
    std::cout << "No. of Spaces: " << spaces << std::endl;
    std::cout << "Sum of Integers: " << sod << std::endl;
}

int main()
{
    std::string input;
    std::cout << "Input is: ";
    std::cin >> input;
    analyzeCharacters(input);
    return 0;
}