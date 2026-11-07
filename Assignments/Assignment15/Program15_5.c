#include<stdio.h>
#include<stdlib.h>

float Percentage(int iTotal, int iObtained)
{
    float fAns = 0.0f;

    if(iTotal > 0 && iObtained >= 0 && iTotal >= iObtained)
    {
        fAns = ((float)iObtained / iTotal) * 100;
    }
    else
    {
        printf("Invalid Input\n");
        exit(EXIT_FAILURE);
    }

    return fAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Please Enter Total Marks : \n");
    scanf("%d",&iValue1);

    printf("Please Enter Obtained Marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %.2f",fRet);

    return EXIT_SUCCESS;
}   
