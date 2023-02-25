#include<stdio.h>

void main()
{
    int n, r, s = 0;
    scanf("%d", &n);
    for(int i = n; i > 0; i /= 10)
    {
        r = i % 10;
        s = (s * 10) + r;
    }
    if(s == n) printf("Palindrome");
    else printf("Not Palindrome");
}