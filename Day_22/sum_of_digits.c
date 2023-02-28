# include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    while(n != n % 10)
    {
        int sum = 0;
        int i = n;
        while(i > 0)
        {
            sum += i % 10;
            i /= 10;
        }
        n = sum;
    }
    printf("%d", n);
}