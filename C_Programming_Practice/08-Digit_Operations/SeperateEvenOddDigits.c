#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  DisplayDigit
// Input         :  Integer
// Output        :  void
// Description   :  Displays Each Digit as Even
//                  or Odd from a Given Number
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            printf("Even : %d\n",iDigit);
        }
        else
        {
            printf("Odd : %d\n",iDigit);
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);   

    return EXIT_SUCCESS;
}
