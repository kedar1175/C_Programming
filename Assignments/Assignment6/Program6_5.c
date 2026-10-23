#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(iYears > 10)
    {
        fBonus = fSalary * 0.15;

        printf("Bonus is : %f",fBonus);
    }
    else if(iYears >= 5 && iYears < 10)
    {
        fBonus = fSalary * 0.10;

        printf("Bonus is %f: ",fBonus);
    }
    else if(iYears > 0 && iYears < 5)
    {
        fBonus = fSalary * 0.05;

        printf("Bonus is %f: ",fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and Years of Service : \n");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary , iYears);

    return EXIT_SUCCESS;
}
