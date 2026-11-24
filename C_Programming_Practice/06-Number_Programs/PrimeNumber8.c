#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////
//
// Function Name :  CheckPrime
// Input         :  Integer
// Output        :  Boolean
// Description   :  Checks whether the given number is a Prime Number or not.
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 2, bFlag = true; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
        }
    }

    return bFlag;
}

int main(void)
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet)
    {
        printf("It is an Prime Number \n");
    }
    else
    {
        printf("It is not a Prime Number \n");
    }

    return EXIT_SUCCESS;
}
