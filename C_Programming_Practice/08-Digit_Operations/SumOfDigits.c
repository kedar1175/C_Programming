#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  SumDigit
// Input         :  Integer
// Output        :  Integer
// Description   :  Calculates the Sum of All
//                  Digits of a Given Number
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////

int SumDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;

        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);   

    printf("Sum of Digit is : %d\n",iRet);

    return EXIT_SUCCESS;
}
