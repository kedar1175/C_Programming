#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    char ch = '\0';

    for(ch = 'A'; ch < 'A' + iNo; ch++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of Element : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
