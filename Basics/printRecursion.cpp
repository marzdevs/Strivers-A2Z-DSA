void printNTimes(int n)
{
    // Write your code here.
    static int cnt = 0;

    if (cnt >= n)
    {
        return;
    }

    cout << "Coding Ninjas ";
    cnt++;

    // Recursive call
    printNTimes(n);
}