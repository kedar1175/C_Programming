#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue = 0;

    printf("Enter a Number : \n");
    scanf("%d",&ivalue);

    if((ivalue % 2) == 0)
    {
        printf("It is Even Number \n");
    }

    else
    {
        printf("It is Odd Number \n");
    }

    return EXIT_SUCCESS;
}
