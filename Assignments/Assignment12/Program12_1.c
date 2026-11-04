#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue1);

    DisplayDigits(iValue1);

    return EXIT_SUCCESS;
}
