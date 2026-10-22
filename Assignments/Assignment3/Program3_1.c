#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }
    else
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("%d\t",iCnt * 2);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}
