#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  Display
// Input         :  Nothing
// Output        :  Void
// Description   :  Display Jay Ganesh Four Times Using Loop
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////
    
void Display()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 4; iCnt++)
        {
            printf("Jay Ganesh...");
        }
    }
int main()
{
    Display();

    return EXIT_SUCCESS;
}
