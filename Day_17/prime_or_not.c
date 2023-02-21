#include <stdio.h>

void main()
{
    int n, count=0;
    scanf("%d", &n);
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        count++;
    }
    if(count >= 1) printf("NOT PRIME");
    else printf("PRIME");
}