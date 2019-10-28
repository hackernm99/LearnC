// WAP to print n natural number in reverse order where
// n is given by the user.
#include <stdio.h>

void main()
{
    int i;
    int n;

    printf("Enter a natural number: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}