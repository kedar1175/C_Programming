#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  CountDigit
// Input         :  Integer
// Output        :  Integer
// Description   :  Counts the Number of Digits
//                 in a Given Number
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);   

    printf("Number of Digit is : %d\n",iRet);

    return EXIT_SUCCESS;
}
