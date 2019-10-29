//Multi dimentional Array
//Areeb Sayyed
#include <stdio.h>
void main()
{
    int i;
    int j;
    int a[3][3];

    printf("Enter 3 Elements For Array : \n");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
        printf("Enter 3 Elements for next : \n");
    }
    printf("All Elements Filled : \n\n");

    printf("Elements : \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}