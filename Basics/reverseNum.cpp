long reverseBits(long n)
{
    // Write your code here.
    int revNum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }
    cout < revNum;
}