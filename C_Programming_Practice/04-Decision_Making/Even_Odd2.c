#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  checkeven
// Input         :  Integer
// Output        :  Nothing (Void)
// Description   :  Check Even Odd
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////

void checkeven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("It is Even Number \n");
    }

    else
    {
        printf("It is Odd Number \n");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter a Number : \n");
    scanf("%d",&ivalue);

    checkeven(ivalue);

    return EXIT_SUCCESS;
}
