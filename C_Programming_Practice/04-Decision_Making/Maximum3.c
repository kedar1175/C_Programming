#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  Maximum
// Input         :  Integer,Integer
// Output        :  Integer
// Description   :  Find Maximum of Two Number 
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////

int Maximum(int iNo1, int iNo2)
{
     if(iNo1 > iNo2)
    {        
        return iNo1;
    }

    else
    {
        return iNo2;
    }

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iAns = Maximum(iValue1,iValue2);

    printf("Maximum number is : %d", iAns);
    
    return EXIT_SUCCESS;
}
