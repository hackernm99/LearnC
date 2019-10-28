//Arithmetic_Operation
//Areeb Sayyed
#include <stdio.h>

void main()
{
    int n1;
    int n2;
    int result;
    int choice;

    printf("Enter Arithmetic Operation You Want to Perform  .\n");

    printf("1.Addition \n");
    printf("2.Substraction \n");
    printf("3.Division \n");
    printf("4.Multiplication\n");

    scanf("%d", &choice);

    printf("Enter Value Of Number one : ");
    scanf("%d", &n1);

    printf("ENter VAlue Of Number two : ");
    scanf("%d", &n2);

    switch (choice)
    {
    case 1:
        result = n1 + n2;
        printf("Addition is : %d", result);
        break;
    case 2:
        result = n1 - n2;
        printf("Substraction is : %d", result);
        break;
    case 3:
        result = n1 / n2;
        printf("Division is : %d", result);
        break;
    case 4:
        printf("Multiplication is : %d", result);
        result = n1 * n2;
        break;
    default:
        printf("Invalid Choice. ");
    }
}
