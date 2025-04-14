#include <iostream>
#include <set>

int sums_of_square_of_digits(int nums)
{
    int result = 0;
    std::string nums_str = std::to_string(nums);
    for (int i = 0; i < nums_str.length(); i++)
    {
        int val = nums_str[i] - '0';
        result += val * val;
    }

    return result;
}

std::set<int> seen;

bool isHappyNum(int num)
{
    int val = sums_of_square_of_digits(num);

    if (seen.count(val))
        return false;

    seen.insert(val);

    if (val == 1)
        return true;
        
    return isHappyNum(val);
}

int main()
{
    std::cout << isHappyNum(19);
    return 0;
}