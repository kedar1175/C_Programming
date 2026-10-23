#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks , int iAge)
{
    if(fMarks >= 60 && fMarks <= 100 && iAge >= 17)
    {
        printf("Eligible for Admission \n");
    }
    else if (fMarks <= 60 && iAge >= 17)
    {
        printf("Not Eligible \n");
    }
    else if(fMarks >= 60 && iAge <= 17)
    {
        printf("Not Eligible \n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age : \n");
    scanf("%f %d",&fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
