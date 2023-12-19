#include <iostream>

bool isPalindrome(int n)
{
    int revNum = 0;
    int dupe = n;

    while (n > 0)
    {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }

    return dupe == revNum;
}

void printResult(bool result)
{
    if (result)
        std::cout << "True";
    else
        std::cout << "False";
}

int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    bool result = isPalindrome(number);
    printResult(result);

    return 0;
}