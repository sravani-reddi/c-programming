#include<stdio.h>
void main()
{
    int i, p, q, r, even=0, odd=0;
    p=20;
    q=5;
    for(i=1;i<=20;i++)
    if(i%q==0)
    {
        r=i;
        printf("%d ",r);
    
        if(r%2==0)
        even+=r;
        else
        odd+=r;
    }
    printf("\n%d %d",even,odd);


    
}
    
    

