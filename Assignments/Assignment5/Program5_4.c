#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 ==0)
    {
        printf("%d is Divisible by 5 & 3 Both",iValue);
    }
    else if(iValue % 3 == 0)
    {
        printf("%d is Divisible by 3",iValue);
    }
    else if(iValue % 5 == 0)
    {
        printf("%d is Divisible by 5",iValue);
    }
    else
    {
        printf("%d is not Divisible by 3 & 5 Either",iValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
