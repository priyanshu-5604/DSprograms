#include<stdio.h>
void main(){
    int a[20],n,ele,i,temp,j;
    printf("enter size");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter new element");
    scanf("%d",&ele);
    a[n]=ele;
    printf("array is");
    for(i=0;i<=n;i++)
    printf("%d",a[i]);
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-i-1;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("array is");
    for(i=0;i<=n;i++)
    printf("%d",a[i]);

}