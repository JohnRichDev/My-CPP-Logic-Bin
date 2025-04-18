#include <iostream>
#include <vector>

int main()
{
    std::cout << "Input the number of rows and cols (separate by space): ";
    int rows, cols;
    std::cin >> rows;
    std::cin >> cols;

    int nums[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << "Input nums[" << i << "][" << j << "]: ";
            std::cin >> nums[i][j];
        }
    }

    std::cout << "\nMatrix:" << std::endl;

    for (int a = 0; a < rows; a++)
    {
        for (int b = 0; b < cols; b++)
        {
            std::cout << nums[a][b] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nSnail Order: " << std::endl;

    std::vector<int> result;

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            result.push_back(nums[top][i]);
        top++;

        for (int i = top; i <= bottom; i++)
            result.push_back(nums[i][right]);
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                result.push_back(nums[bottom][i]);
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                result.push_back(nums[i][left]);
            left++;
        }
    }

    for (int a = 0; a < result.size(); a++)
    {
        std::cout << result[a];
        if (a != result.size() - 1)
            std::cout << ", ";
    }
}