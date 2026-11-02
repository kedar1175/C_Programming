#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting Point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}
