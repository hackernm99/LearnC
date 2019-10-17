// WAP for find whether a given charater is vowel or consonant.

#include <stdio.h>

void main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("its a vowel\n");
        break;
    default:
        printf("Its a consonant\n");
    }
}