#include <iostream>

int getVal(int nums)
{
    std::string nums_str = std::to_string(nums);
    int val = nums_str[0] - '0';
    for (int i = 1; i < nums_str.length(); i++)
    {
        if (i % 2 == 0)
        {
            val += nums_str[i] - '0';
        }
        else
        {
            val -= nums_str[i] - '0';
        }
    }
    return val;
}

int main()
{
    int input;
    std::cout << "Enter a positive integer n: ";
    std::cin >> input;
    std::cout << "The sum of digits with their corresponding signs is: " << getVal(input);
    return 0;
}