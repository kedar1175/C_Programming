#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iNo)
{
    double dSqm = 0.0;

    dSqm = iNo * 0.0929;

    return dSqm;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf("Enter area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%d Square feet is in Square meter %lf ",iValue, dRet);

    return EXIT_SUCCESS;
}
