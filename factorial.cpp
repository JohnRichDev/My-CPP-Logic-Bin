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

int main()
{
    std::cout << factorial(5);
    return 0;
}