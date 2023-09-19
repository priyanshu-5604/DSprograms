#include<stdio.h>

void main()
{
    int a[10],i,pos,ele,n;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element and position");
    scanf("%d%d",&ele,&pos);
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=ele;
    printf("New array is:\n");
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
}
