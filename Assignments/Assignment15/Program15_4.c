#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 1;

    if(iNo1 != 0)
    {
        iAns = iAns * iNo1;
    }

    if(iNo2 != 0)
    {
        iAns = iAns * iNo2;
    }

    if(iNo3 != 0)
    {
        iAns = iAns * iNo3;
    }

    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }

    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter Three Numbers : \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d",iRet);
    
    return EXIT_SUCCESS;
}
