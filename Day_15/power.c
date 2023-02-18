#include<stdio.h>
void main()
{
    int x,y,i;
    int j=1;
    printf("enter x value:");
    scanf("%d",&x);
    printf("enter y value:");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
        j*=x;
    printf("%d",j);
}