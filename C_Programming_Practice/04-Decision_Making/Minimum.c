#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  Minimum
// Input         :  Integer,Integer
// Output        :  Integer
// Description   :  Find Minimum of Two Numbers
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////

int Minimum(int iNo1, int iNo2)
{
     if(iNo1 < iNo2)
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

    iAns = Minimum(iValue1,iValue2);

    printf("Minimum number is : %d", iAns);
    
    return EXIT_SUCCESS;
}
