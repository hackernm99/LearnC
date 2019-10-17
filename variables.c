#include <stdio.h>

void main()
{
    // variable definition
    int rollno;
    float marks;
    double fees;

    // assigning values to the variables
    rollno = 1;
    marks = 35.50;
    fees = 50000.01;

    printf("%d \n", rollno);
    printf("%f \n", marks);
    printf("%f \n", fees);

    printf("Size of Int : %d \n",sizeof(rollno));
    printf("Size of float : %d \n",sizeof(marks));
    printf("Size of double : %d \n",sizeof(fees));

}
