// WAP to accept the value of year as input from the keyboard
// and print wether it is a leap year or not

#include <stdio.h>

void main()
{
    int year;

    printf("Enter the year : ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
}

/* Output
Enter the year : 2020
2020 is a leap year
*/