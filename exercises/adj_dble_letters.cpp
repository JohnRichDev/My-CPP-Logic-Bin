#include <iostream>

bool check(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i + 1])
            return true;
    }
    return false;
}

int main()
{
    int cases;
    std::cout << "Number of cases: ";
    std::cin >> cases;

    bool hasAdjDoubleLetters[cases];

    for (int i = 0; i < cases; i++)
    {
        std::string val;
        std::cout << "Input the case " << i + 1 << " string: ";
        std::cin >> val;
        hasAdjDoubleLetters[i] = check(val);
    }

    std::cout << std::endl << std::endl;

    for (int i = 0; i < cases; i++)
    {
        std::cout << "Case #" << i + 1 << ": ";
        if (hasAdjDoubleLetters[i])
        {
            std::cout << "YES" << std::endl;
            continue;
        }
        std::cout << "NO" << std::endl;
    }
    return 0;
}