#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c is Uppercase Alphaber",cValue);
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c is Lowercase Alphaber",cValue);
    }
    else if (cValue >= '0' && cValue <= '9')
    {
        printf("%c is Digit",cValue);
    }
    else
    {
        printf("%c is Special Character",cValue);
    }
    
    
}

int main()
{
    char cValue = '\0';

    printf("Enter a number : \n");
    scanf(" %c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
