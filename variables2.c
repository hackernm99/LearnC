// WAP to print values of variable and thier addresses.
#include <stdio.h>

void main()
{

    int rollno = 1;
    float marks = 100;
    double fees = 10000;

    printf("Value of roll no : %d \n", rollno);
    printf("Address of rollno: %d \n", &rollno);

    printf("Value of marks :  %f \n", marks);
    printf("Address of marks : %f \n", &marks);

    printf("Value of fees : %f \n", fees);
    printf("Address of fees : %f \n", &fees);
}

/* OUTPUT

Value of roll no : 1
Address of rollno: 6422316
Value of marks :  100.000000
Address of marks : 100.000000
Value of fees : 10000.000000
Address of fees : 10000.000012

*/