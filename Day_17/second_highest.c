#include <stdio.h>

void main()
{
    int s;
    scanf("%d", &s);
    int arr[s];
    for(int i = 0; i < s; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < s; i++)
        for(int j = 0; j < s - i - 1; j++)
        {
            int temp;
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    printf("%d", arr[s-2]);
}