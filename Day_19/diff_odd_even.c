#include<stdio.h>

void main()
{
    int n, even=0, odd=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       if(i%2==0)
        even+=i;
        else
        odd+=i;
    }
    printf("even sum=%d\n",even);
    printf("odd sum=%d\n",odd);
    if(even>odd)
    printf("%d\n",even-odd);
    else if(odd>even)
    printf("%d\n",odd-even);
}