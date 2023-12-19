bool checkArmstrong(int n)
{
    // Write your code here
    int revNum = 0;
    int sum = 0;
    int dupe = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }
    return (dupe == sum);
}
