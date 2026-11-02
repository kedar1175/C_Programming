#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart <= iEnd)
    {
        for(iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            printf("%d\n",iCnt);
        }
    }
    else
    {
        printf("Invalid Range\n");
        exit(EXIT_SUCCESS);
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

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}
