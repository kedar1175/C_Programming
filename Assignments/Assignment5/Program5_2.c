#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int IYear)
{
    if((IYear % 400 == 0) || ((IYear % 4 == 0) && (IYear % 100 != 0)))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year : \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
