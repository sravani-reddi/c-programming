#include<stdio.h>

void main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    for(int i = n1; i <= n2; i++)
    {
        if((i == n1 + 4) || (i == n1 + 5)) continue;
        if( i % 2 == 1 ) printf("%d\t", i);
    }
}