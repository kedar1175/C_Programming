#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  AverageDigits
// Input         :  Integer
// Output        :  Float
// Description   :  Calculates the Average of Digits
// Author        :  Kedar Sanjay Joshi
//
//////////////////////////////////////////////

float AverageDigits(int iNo)
{
    float iDigit = 0;
    int iCount = 0;
    int iSum = 0;
    float fFinal = 0.0f;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo / 10;
    }
    fFinal = iSum / iCount;

    return fFinal;
   
}


int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);   

    printf("Average of Digits : %f\n",fRet);

    return EXIT_SUCCESS;
}//typecasting is needed
