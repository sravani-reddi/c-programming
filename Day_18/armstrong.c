#include<stdio.h>

void main()
{
    int n, temp=0, r, sum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }
    if(sum==temp)
    printf("ARMSTRONG");
    else
    printf("NOT A ARMSTRONG");
}