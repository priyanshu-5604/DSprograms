#include<stdio.h>

void main()  
{
    int a[20],n,i;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Array is:\n");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }

}
