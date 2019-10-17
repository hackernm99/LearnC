// WAP to sum n natural number where
// n is given by the user.

#include <stdio.h>

void main()
{
    int n;
    int i = 1;
    int sum = 0;
    ;

    printf("Enter N: ");
    scanf("%d", &n);
    while (i <= n)
    {
        // printf("%d\t %d\t", i, sum);
        sum = sum + i;
        // printf("%d\t", sum);
        i++;
        // printf("%d\n", i);
    }
    printf("The sum of n natural numbers is :%d \n", sum);
}
