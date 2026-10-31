#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iKMtoM = 0;

    iKMtoM = iNo * 1000;

    return iKMtoM;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d Kilometer is %d in meter ", iValue, iRet);  

    return EXIT_SUCCESS;
}
