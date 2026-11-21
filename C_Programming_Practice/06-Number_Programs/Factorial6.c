#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long ULONG;

//////////////////////////////////////////////
//
// Function Name :  Factorial
// Input         :  Integer
// Output        :  ULONG (Unsigned Long Long)
// Description   :  Calculates the factorial of a given number
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////

ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iFact = 0;

    for(iCnt = 1 , iFact = 1; iCnt <= iNo; iCnt++)
    {
       iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %llu\n",iRet);
    
    return EXIT_SUCCESS;
}
