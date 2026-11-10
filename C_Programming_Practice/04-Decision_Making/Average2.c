#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name :  Average
// Input         :  Integer,Integer
// Output        :  Float
// Description   :  Find Average of Two Numbers
// Author        :  Kedar Sanjay Joshi
//
///////////////////////////////////////////////

float Average(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    //Typecasting
    fAns = ((float)iNo1 + (float) iNo2) / 2 ;

    return fAns;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    fResult = Average(iValue1,iValue2);

    printf("Average number is : %f\n", fResult);
    
    return EXIT_SUCCESS;
}
