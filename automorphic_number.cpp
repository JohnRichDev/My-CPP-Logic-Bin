#include <iostream>

bool isAutomorphic(int num)
{
    int val = num * num;
    std::string num_str = std::to_string(num);
    std::string str = std::to_string(val);
    for (int i = 0; i < num_str.length(); i++)
    {
        if (num_str[i] != str[str.length()+i-(num_str.length())]) {
            return false;
        }
    }
    return true;
}

int main()
{

    std::cout << isAutomorphic(7);
    return 0;
}