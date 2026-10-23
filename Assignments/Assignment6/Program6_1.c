#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits >= 0 && iUnits <= 100)
    {
        fBill = iUnits * 5;

        printf("Bill is : %f\n",fBill);
    }
    else if(iUnits >= 101 && iUnits <= 200)
    {
        fBill = iUnits * 7;

        printf("Bill is : %f\n",fBill);
    }
    else if(iUnits >= 201)
    {
        fBill = iUnits * 10;

        printf("Bill is : %f\n",fBill);
    }
    else
    {
        printf("Invalid input \n");
    }
}

int main()
{
    int iUnits = 0;

    printf("Enteer Consumed units : \n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
