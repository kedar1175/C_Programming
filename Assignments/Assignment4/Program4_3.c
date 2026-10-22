#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d is Greater\n",iNo1);
    }
    else if (iNo1 < iNo2)
    {
        printf("%d is Greater\n",iNo2);
    }
    else
    {
        printf("%d %d Both Numbers are Equal\n",iNo1,iNo2);
    }
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue1);
    
    printf("Enter a number : \n");
    scanf("%d",&iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}
