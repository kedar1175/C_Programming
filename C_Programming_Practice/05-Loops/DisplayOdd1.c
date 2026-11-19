//Input : 10
//1  3  5  7  

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  Display
// Input         :  Integer
// Output        :  Void
// Description   :  Display Odd Numbers from 1 to N
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////
    
void Display(int iNo)
{
     int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        printf("%d\t",iCnt);
        iCnt++;
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
