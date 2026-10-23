#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if(fMarks >= 90 && fMarks <=100)
    {
        printf("Obtained Grade is : A\n");
    }
    else if(fMarks >= 75 && fMarks <= 89)
    {
        printf("Obtained Grade is : B\n");
    }
    else if(fMarks >= 60 && fMarks <= 74) 
    {
        printf("Obtained Grade is : C\n");
    }
    else if(fMarks >= 40 && fMarks <= 59) 
    {
        printf("Obtained Grade is : D\n");
    }
    else if(fMarks >= 0 && fMarks <= 39) 
    {
        printf("Failed\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks : \n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}
