#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    int i = 0;

    for(i = 1; i <= iFrequency; i++)
    {
        printf("%d ",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount =0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter frequency : \n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}
