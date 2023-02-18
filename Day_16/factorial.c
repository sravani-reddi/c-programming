#include<stdio.h>
void main()
{
    int n, p=1, i;
    n=5;
    for(i=1;i<=n;i++)
    {
        p*=i;
    }
     printf("%d",p);
}