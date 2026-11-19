//Input 4
//1   2   3   4

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  Display
// Input         :  Integer
// Output        :  Void
// Description   :  Display Numbers from 1 to N
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////
    
void Display(int iNo)
{
     int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
