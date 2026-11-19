#include<stdio.h>
int main()
{
    int n,original,rev=0,rem=0;
    printf("enter the number to find palindrome number\n");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        rem= n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(original == rev)
    {
        printf("palindrom number\n");
    }
    else
    {
        printf("number is not a palindrom\n");
    }
    return 0;
}
