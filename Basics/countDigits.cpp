int countDigits(int n)
{
    // Write your code here.
    int count = 0;
    while (n > 0)
    {
        count = count + 1;
        n = n / 10;
    }
    return count;
}