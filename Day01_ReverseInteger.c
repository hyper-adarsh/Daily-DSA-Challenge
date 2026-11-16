int reverse(int x)
{
    double rev = 0, rem = 0;

    while (x != 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        if (rev > 2147483647 || rev < -2147483648LL)
        {
            return 0;
        }
        x = x / 10;
    }

    return rev;
}
