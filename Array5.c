#include<stdio.h>

void main()
{
    int a[20],n,i,sum=0,nat;
    printf("Enter size of array");
    scanf("%d",&n);
    nat=(n*(n+1))/2;
    printf("Enter array elements");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Missing element is %d",nat-sum);
}
