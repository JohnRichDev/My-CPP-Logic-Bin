#include <iostream>

bool isArmstrong(std::string str) {
    int sum = 0;

    for (int i = 0; i < str.length(); i++) {
        int val = str[i] - '0';
        sum += val * val * val;
    }

    return std::to_string(sum) == str;
}

int main() {

    std::string testcase = "153";
    std::cout << isArmstrong(testcase);

    return 0;
}