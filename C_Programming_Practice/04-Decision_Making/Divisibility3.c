#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  CheckDivisible
// Input         :  Integer
// Output        :  Void
// Description   :  Check Divisibility by 3 and 5
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0))
    {
        if(((iNo % 5) == 0))
        {
            printf("It is divisible\n");
        }
        else
        {
            printf("It is not divisible\n");
        }
    }
    else
    {
        printf("It is not divisible\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}
