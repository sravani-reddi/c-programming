#include <stdio.h>

void main()
{
    int s, n, m;
    scanf("%d", &s);
    scanf("%d", &n);
    m = n;
    for(int i = 1; i < s; i++)
    {
        scanf("%d", &n);
        if(n < m) m = n;
    }
    printf("%d", m);
}