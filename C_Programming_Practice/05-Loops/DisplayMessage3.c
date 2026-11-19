#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  Display
// Input         :  Integer
// Output        :  Void
// Description   :  Display Jay Ganesh N Times
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////
    
void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("Jay Ganesh...");
        }
    }
int main()
{
    int iValue = 0;

    printf("Enter the frequency :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
