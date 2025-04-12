#include <iostream>
#include <vector>

int largestNum(std::vector<int> n)
{
    int largest = n[0];

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] > largest)
            largest = n[i];
    }

    return largest;
}

int main()
{
    std::vector<int> testCase = {5, 2, 3, 1, 8, 7};

    std::cout << largestNum(testCase);

    return 0;
}