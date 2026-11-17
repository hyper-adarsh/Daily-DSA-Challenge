#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,sum,n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter %d array elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
        sum+=a[i];
    }

    printf("array sum is = %d\n",sum);
    return 0;
}
