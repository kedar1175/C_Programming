#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  Maximum
// Input         :  Integer,Integeer
// Output        :  Nothing (Void)
// Description   :  Check Maximum Number
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////

void Maximum(int iNo1,int iNo2)
{
     if(iNo1 > iNo2)
    {
        printf("Maximum is : %d",iNo1);
    }

    else
    {
        printf("Maximum is : %d",iNo2);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    Maximum(iValue1,iValue2);

    return EXIT_SUCCESS;
}
