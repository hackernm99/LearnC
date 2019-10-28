// WAP to print n natural numbers using for loop
#include <stdio.h>

void main()
{
    int i;
    int n;

    printf("Enter a natural number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}