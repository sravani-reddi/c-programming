#include<stdio.h>

void main()
{
   int n;
   scanf("%d",&n);
   for(int i=2;i<=n;i++)
   {
        if(i%2==0)
        printf("%d\t",i);
   } 
}