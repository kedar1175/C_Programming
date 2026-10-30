#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    
    for(iCnt1 = iNo; iCnt1 >= 0; iCnt1--)
    {
        printf("%d\t",-iCnt1);
    }
    
    for(iCnt2 = 1; iCnt2 <= iNo; iCnt2++)
    {
        printf("%d\t",iCnt2);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter an number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
