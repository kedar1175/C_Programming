//Input : 10
//1  3  5  7  

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  Summation
// Input         :  Integer
// Output        :  Integer
// Description   :  Calculates the product of numbers
//                  from 1 to the given number
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////
    
int Summation(int iNo)
{
     int iCnt = 0;
     int iSum = 0;

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

    iRet = Summation(iValue);

    printf("Summation is : %d\n",iRet);

    return EXIT_SUCCESS;
}
