#include <iostream>

int sums_of_digits(int nums)
{
    int result = 0;
    std::string nums_str = std::to_string(nums);
    for (int i = 0; i < nums_str.length(); i++)
    {
        result += nums_str[i] - '0';
    }

    return result;
}

int main()
{
    int nums = 123;

    std::cout << sums_of_digits(nums);

    return 0;
}