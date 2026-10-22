#include<stdio.h>
#include<stdlib.h>

void CheckVowel(char CValue)
{
    if((CValue == 'a') || (CValue == 'e') || 
       (CValue == 'i') || (CValue == 'o') ||
       (CValue == 'u') || (CValue == 'A') || 
       (CValue == 'E') || (CValue == 'I') || 
       (CValue == 'O') || (CValue == 'U'))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

int main()
{
    char cValue = 0;

    printf("Enter an Charecter : \n");
    scanf(" %c", &cValue);

    CheckVowel(cValue);

    return EXIT_SUCCESS;
}
