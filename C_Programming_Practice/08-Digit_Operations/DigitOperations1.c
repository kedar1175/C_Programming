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

//////////////////////////////////////////////
//
// Function Name :  AverageDigits
// Input         :  Integer
// Output        :  Float
// Description   :  Calculates the Average of Digits of a Given Number
// Author        :  Kedar Sanjay Joshi
//
//////////////////////////////////////////////

float AverageDigits(int iNo)
{
    int iSum = 0;
    int iCount = 0;
    float fAvg = 0.0f;

    if(iNo <  0)
    {
        iNo = -iNo;
    }

    iSum = SumDigit(iNo);
    iCount = CountDigit(iNo);
    
    fAvg = (float) iSum / (float) iCount;     

    return (fAvg);
   
}


int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);   

    printf("Average of Digits : %.2f\n",fRet);

    return EXIT_SUCCESS;
}
