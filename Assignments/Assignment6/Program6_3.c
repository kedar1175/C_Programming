#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount <= 1000)
    {
        printf("Payable Amount is : %f",fAmount);
    }
    else if(fAmount >= 1000 && fAmount <= 4999)
    {
        fFinalAmount = fAmount - (fAmount * 0.1);

        printf("Payable Amount is : %f",fFinalAmount);
    }
    else if(fAmount >= 5000)
    {
        fFinalAmount = fAmount - (fAmount * 0.2);

        printf("Payabel Amount is : %f",fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : \n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
