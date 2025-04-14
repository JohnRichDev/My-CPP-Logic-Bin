#include <iostream>

int factorial(int n)
{
    int result = 1;
    if (n == 0)
        return 1;

    for (int i = 1; i < n + 1; i++)
    {
        result *= i;
    }

    return result;
}

bool isHappyNum(int num) {
    std::string num_str = std::to_string(num);
    int sum = 0;
    for (int i = 0; i < num_str.length(); i++) {
        sum += factorial(num_str[i] - '0');
    }

    return (std::to_string(sum) == num_str);
}

int main()
{
    std::cout << isHappyNum(145);
    return 0;
}