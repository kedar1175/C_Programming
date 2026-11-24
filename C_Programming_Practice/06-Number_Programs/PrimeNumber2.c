#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////
//
// Function Name : CheckPrime
// Input         : Integer
// Output        : Boolean
// Description   : Checks whether the given number is a Prime Number
// Author        : Kedar Sanjay Joshi
//
///////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == 1)
        {
            return true;
        }   
        else
        {
            return false;
        }
}

int main(void)
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("It is an Prime Number \n");
    }
    else
    {
        printf("It is not a Prime Number \n");
    }

    return EXIT_SUCCESS;
}
