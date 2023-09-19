#include<stdio.h>
void main(){
    int a[20],i,n,x=0,ele;
    printf("enter size");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter element");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
     if(a[i]==ele){
         x++;
      }
 if(x==1)
 printf("entered element is not repeated");
 else if(x>1)
 printf("entered element is repeated %d times",x-1);

}