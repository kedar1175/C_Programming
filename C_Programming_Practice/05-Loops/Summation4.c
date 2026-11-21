//Input : 10
//1  3  5  7  

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  Factorial
// Input         :  Integer
// Output        :  Integer
// Description   :  Calculates the factorial of
//                  the given number
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////
    
int Factorial(int iNo)
{
     int iCnt = 0;
     int iSum = 0;

    iSum = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum * iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the frequency :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return EXIT_SUCCESS;
}
