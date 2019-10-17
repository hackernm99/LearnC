// WAP to print odd numbers upto n
// where n is given by the user.

#include <stdio.h>

void main()
{
    int i = 1;
    int n;

    printf("Enter N: ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i = i + 2;
    }
}
