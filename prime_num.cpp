#include <iostream>

bool isPrime(int n)
{
    if (n == 1) return false;

    bool result = true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            result = false;
            break;
        };
    }

    return result;
}

int main()
{
    std::cout << isPrime(4);
    return 0;
}