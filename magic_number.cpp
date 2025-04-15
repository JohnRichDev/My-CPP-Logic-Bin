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

bool is_magic_number(int num) {
    if (num == 1) return true;
    if (num <= 9) return false;
    return is_magic_number(sums_of_digits(num));
}

int main()
{
    int testcase = 1234;
    std::cout << is_magic_number(testcase);
    return 0;
}