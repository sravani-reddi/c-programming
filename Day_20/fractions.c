# include <stdio.h>

void main()
{
    int n;
    float sum = 0;
    scanf("%d", &n);
    for( int i = 1; i <= n; i++) sum += 1.0 / (float) i;
    printf("%f", sum);
}