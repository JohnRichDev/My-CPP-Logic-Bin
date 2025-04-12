#include <iostream>

int fib(int n)
{
    int result = 0;
    if (n == 1 || n == 2)
        return 1;

    result = fib(n - 1) + fib(n - 2);

    return result;
}

int main()
{
    std::cout << fib(10);
    return 0;
}