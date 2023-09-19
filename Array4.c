#include<stdio.h>

void main()
{
    int a[10],i,n,ele,pos;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to be deleted");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if (ele==a[i])
            {
                pos=i;
                break;
            }
    }
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("New array is:\n");
    for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
}

