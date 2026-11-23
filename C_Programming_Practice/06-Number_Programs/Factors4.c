#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name : DisplayFactors
// Input         : Integer
// Output        : void
// Description   : Displays all proper factors of a given number
// Author        : Kedar Sanjay Joshi
//
//////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are : \n",iNo);
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)
