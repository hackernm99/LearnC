// WAP to print n natural number in reverse order where
// n is given by the user.

#include <stdio.h>

void main()
{
    int n;

    printf("Enter N: ");
    scanf("%d", &n);
    while (n > 0)
    {
        printf("%d\n", n);
        n--;
    }
}
