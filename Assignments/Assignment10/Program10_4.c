#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float iNo)
{
    double dCel = 0.0;

    dCel = (iNo - 32) * (5.0/9.0);

    return dCel;
}

int main()
{
    float iValue = 0.0f;
    double iRet = 0.0;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f",&iValue);

    iRet = FhtoCs(iValue);

    printf("%.4f Fahernheit is %.4lf in Celsius ", iValue, iRet);  

    return EXIT_SUCCESS;
}
