#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////
//
// Function Name : CheckPrime
// Input         : Integer
// Output        : Boolean
// Description   : Check whether the given number is Prime
// Author        : Kedar Sanjay Joshi
//
///////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }

    if(iCnt == (iNo/2) +1)
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
