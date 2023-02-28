# include <stdio.h>

void main()
{
    for(char j = 65; j <= 90; j++)
    {
        for(char i = 65; i <= j; i++)
            printf("%c ", i);
        printf("\n");
    }
    
}