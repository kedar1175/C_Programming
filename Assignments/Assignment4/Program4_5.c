#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("%d is Divisible by 5\n",iNo);
    }
    else
    {
        printf("%d Not Divisible by 5\n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
