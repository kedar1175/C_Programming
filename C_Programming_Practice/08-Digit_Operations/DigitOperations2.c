#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  CountDigit
// Input         :  Integer
// Output        :  Integer
// Description   :  Counts the Number of Digits in a Given Number
// Author        :  Kedar Sanjay Joshi
//
//////////////////////////////////////////////

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

//////////////////////////////////////////////
//
// Function Name :  SumDigit
// Input         :  Integer
// Output        :  Integer
// Description   :  Calculates the Sum of Digits of a Given Number
// Author        :  Kedar Sanjay Joshi
//
//////////////////////////////////////////////

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
    int iSum = 0;
    int iCount = 0;
    float fAvg = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iSum = SumDigit(iValue);
    iCount = CountDigit(iValue);
    
    fAvg = (float) iSum / (float) iCount; 

    printf("Number of Digits : %d\n",iCount);
    printf("Summation of Digit : %d\n",iSum);
    printf("Average of Digits : %.2f\n",fAvg);

    return EXIT_SUCCESS;
}
