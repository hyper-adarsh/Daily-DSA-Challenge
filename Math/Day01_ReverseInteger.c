/*
 * LeetCode #7 - Reverse Integer
 * Language: C
 * Topic: Mathematics / Integer Manipulation
 */

int reverse(int x)
{
    long long rev = 0;
    int rem;

    while (x != 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;

        /* A reversed value outside the signed 32-bit range is invalid. */
        if (rev > 2147483647LL || rev < -2147483648LL)
        {
            return 0;
        }

        x = x / 10;
    }

    return (int)rev;
}
