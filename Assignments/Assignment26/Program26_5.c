#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Deciaml : %d\n",ch);
        printf("Octal : %.4o\n",ch);
        printf("Hexadeciamal : 0X%x",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : \n");
    scanf("%c",&cValue);
    
    Display(cValue);
    
    return EXIT_SUCCESS;
}
