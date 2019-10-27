//WAP to take input as a number and reverse it using while loop

#include <stdio.h>

void main()
{
    int num;
    int temp;

    printf("Enter a three digit number");
    scanf("%d", &num);

    while (num != 0)
    {
        temp = num % 10;
        printf("%d", temp);
        num = num / 10;
    }
}