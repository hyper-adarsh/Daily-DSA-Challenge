#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],temp,n,i;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter %d array elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("the resersed elements are\n");
    for(i=0;i<n;i++)
    {

        printf("%d\n",a[i]);
    }
    return 0;
}
