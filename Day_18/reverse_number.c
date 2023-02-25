#include<stdio.h>

void main()
{
    int n, r, temp;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        printf("%d",r);
    }
}