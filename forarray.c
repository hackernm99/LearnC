#include <stdio.h>

void main()
{
    int a[5];
    int i;
    int sum = 0;

    printf("Enter 5 elements in an array");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements in an array are as follows: \n");
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
        // printf("%d \t", a[i]);
    }
    printf("Sum of all the elemets is %d \n", sum);
}