# include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    int m = 1;
    while(n--)
    {
        for(int i = 0; i < 4; i++, m += 2)
            printf("%d\t", m);
        m -= 4;
        printf("\n");
    }
}